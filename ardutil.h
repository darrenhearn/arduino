// This macro (normally part of pins_arduino.h) doesn't seem to exist in the Codebender environment (?)
#ifndef digitalPinToInterrupt
#define digitalPinToInterrupt(p)  ((p) == 2 ? 0 : ((p) == 3 ? 1 : -1))
#endif

byte bcdToDec(byte bcdByte);
byte decToBcd(byte decByte);
