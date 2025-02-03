#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/
#define MIDI_BASIC

#ifdef KEYBOARD_planck_ez
   #define ORYX_CONFIGURATOR
   #define PLANCK_EZ_LED_LOWER 3
   #define PLANCK_EZ_LED_RAISE 4
   #define PLANCK_EZ_LED_ADJUST 6
#endif

// Fix startup audio
#define AUDIO_INIT_DELAY

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

// Reduce power consumption for iOS compatibility
#define USB_MAX_POWER_CONSUMPTION 100

// Short tap threshold
#define TAPPING_TERM 250
