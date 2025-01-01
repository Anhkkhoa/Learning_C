#include <stdio.h>

int main() 
{
    /*
    if (condition) 
    {
    }
    else if
    {
    }
    else
    {
    }
    */

   //switch case would be better than multiple else if

   char grade;
   
   printf("\nEnter a letter grade: ");
   scanf("%c", &grade);\
   
   switch(grade) //input what parameter want to observer
   {
        case 'A':
        printf("perfect!\n");
        break; //as it will keep cheaking grade do it match with further case

   }

}