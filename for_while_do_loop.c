#include <stdio.h>

int main() 
{
    int counter = 0;
    for (int i = 0; i < 5; i++) // (initialization; condition; update)
    {
        counter++;
    }
    
    while (counter > 0) 
    {
        counter--;
    }

    /*
    do {
    code block
    } while (condition);

    this use for when execute the code block once, before checking the loop is true and run it if it is
    */

   /*
   break - used to break and jump out of loop
   continue - skip the current iteration of loop
   */
}