#include <stdio.h>

struct Player
{
    char name[12];
    int score;
    //apply for all element in structure, both will have name and score
}; //struct will need a ; at the end

int main() 
{
    //struct = collection of related number ("variables")
    struct Player player1; //variable player1
    struct Player player2; //variable player 2

    strcpy(player1.name, "Bro");
    player1.score = 4;

    return 0;

}