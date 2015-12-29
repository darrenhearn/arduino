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

#include "arduino_util.h"

byte bcdToDec(byte bcd) {
    // The high (leftmost) nibble encodes the 10's digit; the low (rightmost) nibble contains the 1's digit
    return 10*(bcd >> 4) + (bcd & 0x0f);
}

byte decToBcd(byte dec) {
    // Isolate the 10's digit and push to the high (leftmost) nibble; put the 1's digit in the low (rightmost) nibble
    byte tens = dec / 10;
    byte ones = dec - 10*tens;
    return (tens << 4) | ones;
}
