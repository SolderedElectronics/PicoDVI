# PicoDVI - Soldered Electronics fork 

---

This is a Soldered Electronics fork of the Adafruit fork of original **PicoDVI** library, updated and adapted for the **Soldered NULA RP2350** board. The goal of this fork is to make DVI output on the RP2350 easier to use out-of-the-box, with minimal setup and cleaner integration into Soldered’s development workflow.

## What’s changed
- Updated pin mappings and sensible defaults for the NULA RP2350  
- Simplified configuration for common video modes  
- Minor fixes and adjustments for RP2350 compatibility  
- Streamlined example sketches for quick testing on Soldered hardware

## Why this fork exists
The original PicoDVI library was designed for RP2040-based boards. While it mostly works on the RP2350, several adjustments were required to ensure stable DVI output and seamless operation with Soldered’s board layout, bootloader, and recommended workflow.

## Compatibility
- **Fully supported:** Soldered NULA RP2350  
- **compatible:** Other RP2350 boards (may require manual pin remapping)


### About Soldered

<img src="https://raw.githubusercontent.com/SolderedElectronics/Soldered-Generic-Arduino-Library/dev/extras/Soldered-logo-color.png" alt="soldered-logo" width="500"/>

At Soldered, we design and manufacture a wide selection of electronic products to help you turn your ideas into acts and bring you one step closer to your final project. Our products are intented for makers and crafted in-house by our experienced team in Osijek, Croatia. We believe that sharing is a crucial element for improvement and innovation, and we work hard to stay connected with all our makers regardless of their skill or experience level. Therefore, all our products are open-source. Finally, we always have your back. If you face any problem concerning either your shopping experience or your electronics project, our team will help you deal with it, offering efficient customer service and cost-free technical support anytime. Some of those might be useful for you:

- [Web Store](https://www.soldered.com/shop)
- [Tutorials & Projects](https://soldered.com/learn)
- [Community & Technical support](https://soldered.com/community)

### Original source

​
This library is possible thanks to original [PicoDVI](https://github.com/Wren6991/PicoDVI) library as well as the [Adafruit fork](https://github.com/adafruit/PicoDVI) of said library. Thank you, Luke Wren and Adafruit.

### Open-source license

Soldered invests vast amounts of time into hardware & software for these products, which are all open-source. Please support future development by buying one of our products.

Check license details in the LICENSE file. Long story short, use these open-source files for any purpose you want to, as long as you apply the same open-source licence to it and disclose the original source. No warranty - all designs in this repository are distributed in the hope that they will be useful, but without any warranty. They are provided "AS IS", therefore without warranty of any kind, either expressed or implied. The entire quality and performance of what you do with the contents of this repository are your responsibility. In no event, Soldered (TAVU) will be liable for your damages, losses, including any general, special, incidental or consequential damage arising out of the use or inability to use the contents of this repository.

## Have fun!

And thank you from your fellow makers at Soldered Electronics.
