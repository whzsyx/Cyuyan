#include<stdio.h>
main()
{
    int i,j;
    printf("\t\t\t\t\t¡¶³Ë·¨¿Ú¾÷±í¡·\n");
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%2d\t",j,i,i*j);
        }
        printf("\n");
    }
}
