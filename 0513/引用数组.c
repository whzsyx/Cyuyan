#include <stdio.h>
 //����һ���±귨
 /* 
main()
{
	int i,a[10];
	printf("������10��������");
	//��������
	for (i=0;i<10;i++) 
	scanf("%d",&a[i]);
	
	
  } 
  */
 //��������������
 /*
 main()
 {
 	int i ,a[10];
 	printf("������10��������");
 	//��������
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);  
	  } 
	//�������
	for (i=0;i<10;i++)
	printf("%d ",*(a+i));
	
  } 
  */
//ָ�뷨
/* 
main()
{
	int i,a[10],*p;
	printf("������10��������");
	//for(i=0;i<10;i++)
	//scanf("%d",&a[i]);
	for(p=a;p<a+10;p++)
	scanf("%d",p)
	for(p=a;p<a+10;p++)
		printf("%d ",*p); 
 }
 */ 
 /*
 //10�����������飬��� ����
 main()
 {
 	int i,a[10],*p;
 	p = a;
 	printf("������10��������");
 	//��������
 	for (i=0;i<10;i++)
		scanf("%d ",p++);
		//�������
		p = a;
		//for(i=0;i<10;i++,p++)
		//	printf("%d",*p);
		for(i=0;i<10;i++)
			printf("%d ",*p++); 
	  
  }
  */
   
