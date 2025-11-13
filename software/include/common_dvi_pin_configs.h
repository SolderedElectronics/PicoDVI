#ifndef _COMMON_DVI_PIN_CONFIGS_H
#define _COMMON_DVI_PIN_CONFIGS_H

// This file defines the TMDS pair layouts on a handful of boards I have been
// developing on. It's not a particularly important file -- just saves some
// copy + paste.

#if defined(ARDUINO)
#include "../libdvi/dvi_serialiser.h"
#else
#include "dvi_serialiser.h"
#endif

#ifndef DVI_DEFAULT_SERIAL_CONFIG
#define DVI_DEFAULT_SERIAL_CONFIG pico_sock_cfg
#endif

#ifndef DVI_DEFAULT_PIO_INST
#define DVI_DEFAULT_PIO_INST pio0
#endif

// ----------------------------------------------------------------------------
// PicoDVI boards

// Config for the Soldered NULA RP2350 board
static struct dvi_serialiser_cfg soldered_nula_rp2350_dvi_cfg = {
  .pio = DVI_DEFAULT_PIO_INST, // Use default PIO instance
  .sm_tmds = {0, 1, 2}, // State machines for TMDS
  .pins_tmds = {14, 16, 18}, // TMDS data pins
  .pins_clk = 12, // Clock pin
  .invert_diffpairs = true // Invert differential pairs
};


#endif
