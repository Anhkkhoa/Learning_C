#include <stdio.h>

int main()
{
    //memory - an array ob bytes within RAM, mem block is single unit byte within memory use to hold some value, and address is where that block located
    short a = 'X';
    printf("%p\n", &a); // will print out hexadecimal address
}