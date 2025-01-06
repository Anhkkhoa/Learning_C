#include <stdio.h>
#include <string.h>

//Nick Wise Word - constants are almost always SCREAMING_CASE, the more modern style I use typically is PascalCase for structs/classes, snake_case or camelCase for functions, and the same as function for variables

struct Recurver
{
    char name[32]; //12 bytes
    float arrow_avg; 
};

int main() {
    struct Recurver archer_one = {"Brady Elision", 9.8};
    struct Recurver archer_two = {"Chang Hye Jin", 9.7};
    struct Recurver archer_three = {"Valencia", 9.6};

    struct Recurver all_archer[] = {archer_one, archer_two, archer_three};

    for (int i = 0; i < sizeof(all_archer)/sizeof(all_archer[0]); i++)
    {
        printf("%-12s\t", all_archer[i].name);
        printf("%.2f\n", all_archer[i].arrow_avg);

    }
    return 0;
}