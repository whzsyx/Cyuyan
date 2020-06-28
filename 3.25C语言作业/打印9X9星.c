#include <stdio.h>
int main()
{
    int i,j=1;
    i=1;
    while(i<=9)
    {
        j=1;
        while(j<=9)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}
