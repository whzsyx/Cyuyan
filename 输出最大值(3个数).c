#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三个数值：\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("最大的是：");
	if(a>b && a>c)
	printf("%d\n",a);
	else if(b>a &&b>c)
	printf("%d\n",b);
	else
	printf("%d\n",c);
	return 0;
 } 
