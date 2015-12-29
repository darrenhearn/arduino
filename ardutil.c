// This macro (normally part of pins_arduino.h) doesn't seem to exist in the Codebender environment (?)
#ifndef digitalPinToInterrupt
#define digitalPinToInterrupt(p)  ((p) == 2 ? 0 : ((p) == 3 ? 1 : -1))
#endif

byte bcdToDec(byte bcd) {
    return 10*(bcdByte >> 4) + (bcdByte & 0x0f);
}

byte decToBcd(byte dec) {
    byte tens = dec / 10;
    byte ones = dec - 10*tens;
    return (tens << 4) | ones;
}
