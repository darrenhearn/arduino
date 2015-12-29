/*
The MIT License (MIT)
Copyright (c) 2015 Darren Hearn (darrenhearnlist@gmail.com)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
documentation files (the "Software"), to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions
of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#ifndef ARDUINO_UTIL
#define ARDUINO_UTIL

#include "Arduino.h"

// This is normally part of pins_arduino.h, but doesn't seem to exist in the Codebender environment.
// Recreating it here, but need to investigate why Codebender doesn't seem to know about it.
#ifndef digitalPinToInterrupt
#define digitalPinToInterrupt(p)  ((p) == 2 ? 0 : ((p) == 3 ? 1 : -1))
#endif

// Set individual bits within a byte[] while keeping a consistent indexing scheme for array elements and
// the bit positions within each element.  For example:
// Array bitPos 0 = leftmost bit of array[0]
// Array bitPos 7 = rightmost bit of array[0]
// Array bit 8 = leftmost bit of array[1]
#define SET_BYTE_ARRAY_BIT(array, bitPos) ((array[(bitPos) >> 3]) |= ((1 << (7 - (bitPos) % 8))))

// Convert a byte between binary-coded decimal (BCD) and decimal representations
uint8_t bcdToDec(uint8_t bcdByte);
uint8_t decToBcd(uint8_t decByte);

#endif
