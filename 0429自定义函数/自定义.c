#include<stdio.h>
int max4(int a, int b,int c,int d);
int max2(int a, int b);




int main()
{
    int a,b,c,d,max;
    printf("�������ĸ�������");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max=max4(a,b,c,d);
    printf("%d,%d,%d��%d�������ǣ�%d",a,b,c,d,max);

}
int max4(int a,int b,int c,int d)
{
    int m;
    m = max2(a,b);
    m = max2(m,c);
    m = max2(m,d);
    return m;
}
int max2(int a,int b)
{
    if(a >= b)
        return a;
    else
        return b;
}
