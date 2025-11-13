// 1-bit (black, white) text mode for PicoDVI.

#include <PicoDVI.h>
#include <Adafruit_NeoPixel.h>
// Here's how an 80x30 character display is declared. First argument,
// resolution, is full display pixel count...character cells are 8x8 pixels,
// yielding the 80x30 result. 640x240 uses "tall" pixels, the result of all
// this is very reminiscent of IBM VGA mode. Second argument is a hardware
// configuration -- examples are written for Soldered NULA RP2350
DVItext1 display(DVI_RES_640x240p60, soldered_nula_rp2350_dvi_cfg);

// Wider and taller modes are possible. Wider pushes overclocking even
// higher than 640x480 mode. SOME BOARDS MIGHT SIMPLY NOT BE COMPATIBLE
// WITH THIS. May require selecting QSPI div4 clock (Tools menu) to slow
// down flash accesses, may require over-volting the CPU to 1.25 or 1.3 V.
// Here's how a 100x60 char display might be declared:
//DVItext1 display(DVI_RES_800x480p60, soldered_nula_rp2350_dvi_cfg);

// A reduced refresh rate display doesn't as aggressive an over-clock
// This timing is verified to work on https://www.adafruit.com/product/2232
//DVItext1 display(DVI_RES_800x240p30, soldered_nula_rp2350_dvi_cfg);

// Configure WSLED parameters
Adafruit_NeoPixel pixels(1, 26); // WSLED object

void setup() { // Runs once on startup
  // Initialize the onboard NeoPixel RGB, used for debugging
  pixels.begin();

  if (!display.begin()) { 
    // Blink LED red infinitely - something's wrong
    while (true)
    {
        pixels.setPixelColor(0, pixels.Color(0x20, 0, 0)); // Set the color to red
        pixels.show();
        delay(400);
        pixels.clear();
        pixels.show();
        delay(400);
    }
  }
}

void loop() {
  display.print("Hello World!  ");
  delay(50);
}
