//
// Created by 吴华洲on 2020/03/09.
//
#include "stdio.h"
int main()
{
	int a,b;
	printf("请输入两个数值：\n");
	scanf("%d%d",&a,&b);
	if(a>b){printf("最小值是%d\n",b);}
	else{printf("最小的值是%d\n",a);}
	
}
