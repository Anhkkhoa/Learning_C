#include <stdio.h>

//Variable, remember int is 8 bytes
int x = 6; // 00000110
int y = 12;// 00001100
int z = 0; // 00000000
int main()
{
    z = x & y;
    // => z = 00000100

    z = x | y;
    // => z = 00001110\

    z = x ^ y;
    //=> z = 00001010

    // >> shift right
    // << shift left

    x = x << 2;

}