#include <stdio.h>

int main()
{
    int age;
    printf("Your Age: ");
        scanf("%d",&age);

    if(age<18)
    {
        printf("Your age under 12 !!");
    }
    else
    {
        printf("you can enter the game");
    }
}