#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=9;i++)
        {
        for(j=0;j<i;j++)
        {
            printf(" ");

        }
        for(j=9;j>=i;j--)
            {
            printf("*");//������ͼ��
            //printf(" *");//������ͼ��
        }
        printf("\n");
    }
}
