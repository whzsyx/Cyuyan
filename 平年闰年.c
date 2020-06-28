#include <stdio.h>
int main()
{
	int year;
	printf("请输入一个年份：\n");
	scanf("%d",&year);
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
	printf("这是闰年");
	else
	printf("这是平年");
	getch();
 } 
