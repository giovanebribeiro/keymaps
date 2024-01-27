#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

//Ignorado devido a mensagem: "IGNORE_MOD_TAP_INTERRUPT is no longer necessary as it is now the default behavior of mod-tap keys. Please remove it from your config."
//#define IGNORE_MOD_TAP_INTERRUPT

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

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


//
// original config.h
//
//#define MUSIC_MAP
//#undef AUDIO_VOICES
//#undef AUDIO_PIN
//#define AUDIO_PIN A5
//#define AUDIO_PIN_ALT A4
//#define AUDIO_PIN_ALT_AS_NEGATIVE
//
///*
// * Feature disable options
// *  These options are also useful to firmware size reduction.
// */
//
///* disable debug print */
////#define NO_DEBUG
//
///* disable print */
////#define NO_PRINT
//
///* disable action features */
////#define NO_ACTION_LAYER
////#define NO_ACTION_TAPPING
////#define NO_ACTION_ONESHOT
//
///*
// * WS2812 Underglow Matrix options
// */
//#define RGB_MATRIX_LED_COUNT 9
//
//#define WS2812_PWM_DRIVER PWMD2
//#define WS2812_PWM_CHANNEL 2
//#define WS2812_PWM_PAL_MODE 1
//#define WS2812_DMA_STREAM STM32_DMA1_STREAM2
//#define WS2812_DMA_CHANNEL 2
//
//#define RGB_DISABLE_WHEN_USB_SUSPENDED