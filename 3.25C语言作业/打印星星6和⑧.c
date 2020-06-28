#include<stdio.h>
int main()
{
    int i,j;
    for (i=0;i<9;i++)
        {
        for(j=9;j>i;j--)
        {
            printf(" ");

        }
        for(j=0;j<=i;j++)
            {
            printf("*");//这个输出图⑥
            //printf(" *");//这个输出图⑧
        }
        printf("\n");
    }
}
