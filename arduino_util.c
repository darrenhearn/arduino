byte bcdToDec(byte bcd) {
    // The high (leftmost) nibble encodes the 10's digit; the low (rightmost) nibble contains the 1's digit
    return 10*(bcdByte >> 4) + (bcdByte & 0x0f);
}

byte decToBcd(byte dec) {
    // Isolate the 10's digit and push to the high (leftmost) nibble; put the 1's digit in the low (rightmost) nibble
    byte tens = dec / 10;
    byte ones = dec - 10*tens;
    return (tens << 4) | ones;
}
