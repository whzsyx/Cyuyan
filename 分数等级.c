#include<stdio.h>
int main()
{
	float s;
	printf("请输入分数：\n");
	scanf("%f",&s);
	if(s>=90)
	    printf("等级为优");
	else
	    if(s>=80)
			printf("良");
		else
			if(s>=70)
				printf("中");
			else
			if(s>=60)
				printf("及");
			else
				printf("不及");	 
 } 
