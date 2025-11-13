// Simple 1-bit Adafruit_GFX-compatible framebuffer for PicoDVI.

#include <PicoDVI.h>
#include <Adafruit_NeoPixel.h>

// Here's how a 640x480 1-bit (black, white) framebuffer is declared.
// Second argument ('false' here) means NO double-buffering; all drawing
// operations are shown as they occur. Third argument is a hardware
// configuration -- examples are written for Soldered NULA RP2350
DVIGFX1 display(DVI_RES_640x480p60, false, soldered_nula_rp2350_dvi_cfg);

// An 800x480 mode is possible but pushes overclocking even higher than
// 640x480 mode. SOME BOARDS MIGHT SIMPLY NOT BE COMPATIBLE WITH THIS.
// May require selecting QSPI div4 clock (Tools menu) to slow down flash
// accesses, may require further over-volting the CPU to 1.25 or 1.3 V.
//DVIGFX1 display(DVI_RES_800x480p60, false, soldered_nula_rp2350_dvi_cfg);

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
  // Draw random lines
  display.drawLine(random(display.width()), random(display.height()), // Start X,Y
                   random(display.width()), random(display.height()), // End X,Y
                   random(2)); // Color (0 or 1)
}
