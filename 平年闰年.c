#include <stdio.h>
int main()
{
	int year;
	printf("������һ����ݣ�\n");
	scanf("%d",&year);
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
	printf("��������");
	else
	printf("����ƽ��");
	getch();
 } 
