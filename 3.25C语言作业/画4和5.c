#include<stdio.h>
main()
{
    int i,j;//i��ȡֵ��Χ1��9��j��ֵ<=i
            //  out:i��ֵ
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    printf("--------------\n");
    for(i=1;i<=9;i++)
        {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        }
}
