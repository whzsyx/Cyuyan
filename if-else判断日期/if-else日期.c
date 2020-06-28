#include<stdio.h>
int main()
{
	int week;
	printf("请输入数字：\n");
	scanf("%d",&week);
	if(week==1)
		printf("星期一");
	else
		if(week==2)
			printf("星期二");
		else
			if(week==3)
				printf("星期三"); 
			else
				if(week==4)
					printf("星期四");
				else
					if(week==5)
						printf("星期五");
					else
						if(week==6)
							printf("星期六");
						else
							if(week==7)
								printf("星期日");
							else
									printf("输入日期错误！"); 
						 
			 
 } 
