#include <stdio.h>
#include <stdlib.h>  

int main()
{
    int x , s;

    printf("number value: ");
    scanf("%d",&x);

    for (s = 1;s<=x; s++)
    {
        printf("%d \n",rand());
    }
}
