#include <stdio.h>
int main()
{
	int a,b,c;
	printf("������������ֵ��\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("�����ǣ�");
	if(a>b && a>c)
	printf("%d\n",a);
	else if(b>a &&b>c)
	printf("%d\n",b);
	else
	printf("%d\n",c);
	return 0;
 } 
