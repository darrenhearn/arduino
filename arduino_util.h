#ifndef ARDUINO_UTIL
#define ARDUINO_UTIL

// This macro (normally part of pins_arduino.h) doesn't seem to exist in the Codebender environment.
// Recreating it here, but need to investigate why Codebender doesn't seem to know about it.
#ifndef digitalPinToInterrupt
#define digitalPinToInterrupt(p)  ((p) == 2 ? 0 : ((p) == 3 ? 1 : -1))
#endif

// Set individual bits within a byte[] while keeping a consistent indexing scheme for array elements and
// the bit positions within each element.  For example:
// Array bitPos 0 = leftmost bit of array[0]
// Array bitPos 7 = rightmost bit of array[0]
// Array bit 8 = leftmost bit of array[1]
#define SET_BYTE_ARRAY_BIT(array, bitPos) ((array[(bitPos) >> 3]) |= (((byte)1) << (7 - (bitPos) % 8)))

// Convert a byte between binary-coded decimal (BCD) and decimal representations
byte bcdToDec(byte bcdByte);
byte decToBcd(byte decByte);

#endif
