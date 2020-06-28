#include<stdio.h>
int main()
{
    int i,n=1;
    for(i=1;i<=10;i++)
    {
        n=n*i;
        printf("%2i! = %2d \n",i,n);
    }
}
