#include <stdio.h>
main()
{
	/*
	int i;
	int sum=0;
	int a[6] = {2,5,8,3,6};//�����ʼ��
	for(i=0;i<6;i++)
	{
		//printf("%4d",a[i]);//�������
		//printf("%4d",a[5-i]);//������� 
		//sum+=a[i];//����֮��
	 } 
	 printf("\n����Ԫ��֮��:%d\n",sum);
	 /*
	 int i,aver,sum;
	 int b[10];
	 printf("������10��������\n");
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&b[i]);
	 }
	 for(i=0;i<10;i++)
	 {
		 printf("b[%d]=%d\n",i,b[i]);
	 }
	 */
	 //�������ֵ
	 int i,max,min;
	 int a[10];
	 printf("������10������:\n");
	 for (i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 	max=a[0];
	 	for(i=1;i<10;i++)
	 	{
	 		if (max<a[i])
	 		max=a[i];
	 		printf("���ֵ�ǣ�%d\n",max);
	 		}
	 	
	 	}
}
