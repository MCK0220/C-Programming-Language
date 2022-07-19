#include <stdio.h>
#include <string.h>   // string library
int main()
{
    char series1[100];
    char series2[100];

    printf("series 1: ");
    gets(series1);

    printf("series 2: ");
    gets(series2);

    strcat(series1,series2);  // strcat() -> concatenates two strings

    printf("result: %s",series1);
}
