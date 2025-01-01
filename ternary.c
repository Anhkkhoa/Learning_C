#include <stdio.h>

int findMax( int x, int y)
{
    /*if (x>y)
    {
        return x;

    }
    else
    {
        return y;
    }*/
    return (x > y) ? x : y; //return x if x is x>y and y if false
    //return (condtion) ? value if true : value if false
    
}

int main() {
    //ternary operator is just shortcut condition if statment

    int max = findMax(3,4);
}
