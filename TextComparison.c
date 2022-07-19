#include <stdio.h>
#include <string.h>   // string library

int main()
{
    char firstText[100];
    char secondText[100];

    printf("enter first text: ");
    gets(firstText);

    printf("\n"); // Space line

    printf("enter second text: ");
    gets(secondText);

    int status;

    status = strcmp(firstText,secondText); // entering text

    if(status==0) // if texts same printf() ** else printf("different");
    {
        printf("the texts are the same");
    } else
    {
        printf("texts are different");
    }
}