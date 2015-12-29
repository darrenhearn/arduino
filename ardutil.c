byte bcdToDec(byte bcd) {
    return 10*(bcdByte >> 4) + (bcdByte & 0x0f);
}

byte decToBcd(byte dec) {
    byte tens = dec / 10;
    byte ones = dec - 10*tens;
    return (tens << 4) | ones;
}
