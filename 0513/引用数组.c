#include <stdio.h>
 //方法一：下标法
 /* 
main()
{
	int i,a[10];
	printf("请输入10个整数：");
	//数据输入
	for (i=0;i<10;i++) 
	scanf("%d",&a[i]);
	
	
  } 
  */
 //方法二数组名法
 /*
 main()
 {
 	int i ,a[10];
 	printf("请输入10个整数：");
 	//数据输入
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);  
	  } 
	//数据输出
	for (i=0;i<10;i++)
	printf("%d ",*(a+i));
	
  } 
  */
//指针法
/* 
main()
{
	int i,a[10],*p;
	printf("请输入10个整数：");
	//for(i=0;i<10;i++)
	//scanf("%d",&a[i]);
	for(p=a;p<a+10;p++)
	scanf("%d",p)
	for(p=a;p<a+10;p++)
		printf("%d ",*p); 
 }
 */ 
 /*
 //10个数存入数组，输出 数据
 main()
 {
 	int i,a[10],*p;
 	p = a;
 	printf("请输入10个整数：");
 	//数据输入
 	for (i=0;i<10;i++)
		scanf("%d ",p++);
		//数据输出
		p = a;
		//for(i=0;i<10;i++,p++)
		//	printf("%d",*p);
		for(i=0;i<10;i++)
			printf("%d ",*p++); 
	  
  }
  */
   
