#include<stdio.h>
/*
main()
{
	int a,b,*p,*p1,*p2;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a<b)
	{
		p=p1;
		p1=p2;
		p2=p;
		 
	}
	//printf("a=%d,b=%d",a,b);
	printf("max=%d,min=%d\n",*p1,*p2);
 }
 */
 /*
 
 
 //(2) 
 
 main()
 {
 	int a,b;
 	int *pa,*pb;
 	printf("请输入两个整数：");
	 scanf("%d%d",&a,&b);
	 printf("交换前：a= %d,b=%d\n",a,b);
	 pa=&a;
	 pb=&b;
	 if(a<b)
	 swap(pa,pb);
	 printf("max=%d,min=%d\n",a,b); 
  } 
  
  
  //自定义函数
  void swap(int *p1,int *p2)
  
  {
  	int tt;
  	tt=*p1;
  	*p1=*p2;
  	*p2=tt;
  	
   }
   */ 
   
//输入三个整数a,b,c要求由大到小顺序输出函数实现
//自定义函数 ,实现嵌套调用 
/*
void exch(int *p1,int *p2,int *p3)
{
	if(*p1<*p2) swap(p1,p2);
	if(*p1<*p3) swap(p1,p3);
	if(*p2<*p3) swap(p2,p3);
 } 
void swap(int *pt1,int *pt2)
{
	int tt;
	tt = *pt1;
	*pt1 =*pt2;
	*pt2 =tt;
	
}
//主函数 
main()
{
	int a,b,c;
	int *pa,*pb,*pc;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	pa=&a;
	pb=&b;
	pc=&c;
	exch(pa,pb,pc);
	printf("由大到小：%d,%d,%d.\n",a,b,c);
	printf("由大到小：%d,%d,%d.\n",*pa,*pb,*pc);
}



 */
 //输入三个整数a,b,c要求由小到大顺序输出函数实现
//自定义函数 ,实现嵌套调用 

void exch(int *p1,int *p2,int *p3)
{
	if(*p1>*p2) swap(p1,p2);
	if(*p1>*p3) swap(p1,p3);
	if(*p2>*p3) swap(p2,p3);
 } 
void swap(int *pt1,int *pt2)
{
	int tt;
	tt = *pt1;
	*pt1 =*pt2;
	*pt2 =tt;
	
}
//主函数 
main()
{
	int a,b,c;
	int *pa,*pb,*pc;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	pa=&a;
	pb=&b;
	pc=&c;
	exch(pa,pb,pc);
	printf("由小到大：%d,%d,%d。\n",a,b,c);
	printf("由小到大：%d,%d,%d。\n",*pa,*pb,*pc);
}

