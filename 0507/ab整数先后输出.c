#include<stdio.h>
/*
main()
{
	int a,b,*p,*p1,*p2;
	printf("����������������");
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
 	printf("����������������");
	 scanf("%d%d",&a,&b);
	 printf("����ǰ��a= %d,b=%d\n",a,b);
	 pa=&a;
	 pb=&b;
	 if(a<b)
	 swap(pa,pb);
	 printf("max=%d,min=%d\n",a,b); 
  } 
  
  
  //�Զ��庯��
  void swap(int *p1,int *p2)
  
  {
  	int tt;
  	tt=*p1;
  	*p1=*p2;
  	*p2=tt;
  	
   }
   */ 
   
//������������a,b,cҪ���ɴ�С˳���������ʵ��
//�Զ��庯�� ,ʵ��Ƕ�׵��� 
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
//������ 
main()
{
	int a,b,c;
	int *pa,*pb,*pc;
	printf("����������������");
	scanf("%d%d%d",&a,&b,&c);
	pa=&a;
	pb=&b;
	pc=&c;
	exch(pa,pb,pc);
	printf("�ɴ�С��%d,%d,%d.\n",a,b,c);
	printf("�ɴ�С��%d,%d,%d.\n",*pa,*pb,*pc);
}



 */
 //������������a,b,cҪ����С����˳���������ʵ��
//�Զ��庯�� ,ʵ��Ƕ�׵��� 

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
//������ 
main()
{
	int a,b,c;
	int *pa,*pb,*pc;
	printf("����������������");
	scanf("%d%d%d",&a,&b,&c);
	pa=&a;
	pb=&b;
	pc=&c;
	exch(pa,pb,pc);
	printf("��С����%d,%d,%d��\n",a,b,c);
	printf("��С����%d,%d,%d��\n",*pa,*pb,*pc);
}

