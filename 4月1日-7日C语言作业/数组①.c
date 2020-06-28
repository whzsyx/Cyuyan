#include <stdio.h>
main()
{
	/*
	int i;
	int sum=0;
	int a[6] = {2,5,8,3,6};//数组初始化
	for(i=0;i<6;i++)
	{
		//printf("%4d",a[i]);//正序输出
		//printf("%4d",a[5-i]);//倒序输出 
		//sum+=a[i];//数组之和
	 } 
	 printf("\n数组元素之和:%d\n",sum);
	 /*
	 int i,aver,sum;
	 int b[10];
	 printf("请输入10个整数：\n");
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&b[i]);
	 }
	 for(i=0;i<10;i++)
	 {
		 printf("b[%d]=%d\n",i,b[i]);
	 }
	 */
	 //数组最大值
	 int i,max,min;
	 int a[10];
	 printf("请输入10个整数:\n");
	 for (i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 	max=a[0];
	 	for(i=1;i<10;i++)
	 	{
	 		if (max<a[i])
	 		max=a[i];
	 		printf("最大值是：%d\n",max);
	 		}
	 	
	 	}
}
