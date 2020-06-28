#include<stdio.h>
main()
{
    int i,j;//i的取值范围1到9，j的值<=i
            //  out:i的值
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
