# QMK Keyboard Firmware for "Sibirskiy Kot"

## About the keyboard

"Сибирский кот" ("Siberian Cat", following my personal preferences of naming my builds after breeds of domestic cats) is my handwired hot-swappable, Tenkey-less, Sun-Unix style layout, USB/Bluetooth keyboard, powered by [Adafruit Feather 32u4 Bluefruit LE](https://learn.adafruit.com/adafruit-feather-32u4-bluefruit-le/overview).


## Latch Multiplexed matrix scanning

One problem I had during the development of this keyboard is that the Adafruit controller board preserved several GPIO pins from the AVR (Atmega32u4) MCU for communication with the bluetooth processor. This leaves us with only 17 GPIO pins, which is insufficient for a TKL layout (87-keys).

To overcome this limitation, I decided to create an extension board with the Feather board mounting on it, which utilizes a single 74HC573 Latch for row scanning. While this approach takes away one GPIO for the LE/~OE singal, it allows up to 8 GPIO pins to be used for both rows and columns. 

OpenMusicLabs has [a good article explaining how the Latch Multiplexing works](http://www.openmusiclabs.com/learning/digital/input-scanning-matrix/latch-mux/index.html) for matrix scanning, if you want to learn more about the technical details.

The LatchMux enabled matrix scanning (matrix.c) is a ```ROW2COL``` only fork of the main QMK matrix scanning code. Support for LatchMux can be enabled with ```ENABLE_LATCHMUX``` macro in config.h. 

The current design requires both the LE and ~OE pins of the latch to be connected together with a GPIO pin, specified by macro ```LATCH_LE_PIN```. This pin cannot be used by any row or column.

Once Latch Multiplexing is enabled, same GPIO pins can be used for both ```MATRIX_ROW_PINS``` and ```MATRIX_COL_PINS```. Generally, ```MATRIX_ROW_PINS``` should specify those pins that are connected to the inputs of the 74573 chip, and the outputs of the latch chip need to be connected to the rows of the matrix.
