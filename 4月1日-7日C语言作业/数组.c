#include<stdio.h>
/*�������ֵ��aver*/
main(){
	

int i,max,min,aver,sum;
	 int a[10];
	 printf("������10������:\n");
	 for (i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 	max=a[0];
		 }
	 	for(i=1;i<10;i++)
	 	{
	 		if (max<a[i])
	 		max=a[i];
	 		sum+=a[i];
	 		aver=sum/a[i];
	 		}
	 		printf("���ֵ�ǣ�%d\n",max);
	 		printf("����֮�ͣ�%d\n",sum);
	 		printf("�����ƽ��ֵ��%d",aver);
	 	}
