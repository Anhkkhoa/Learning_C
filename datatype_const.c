#include <stdio.h>
#include <stdbool.h>

int main() {
    char a = 'C'; //denote single character
    char b[] = 'What'; //Array of charactger %s denote string

    float c = 3.14; //4 byte (32 bits) 6-7 digit %f
    double d = 3.12812412412412421; // 8 bytes (64 bits) 15-16 %lf

    bool e = true; //1 byte
    char f = 100; // 1 byte * -128 - +127 %d or %c
    // unsigned char also one byte but from 0 - 255

    short int h = 32733; // 2 bytes (-32,768 - +32,767), normal int is 4 bytes, long is 8 bytes

    //constant = fixed value that cannot be altered by the program during it execution, usually full uppercase

}