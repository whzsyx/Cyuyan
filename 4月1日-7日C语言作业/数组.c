#include<stdio.h>
/*数组最大值和aver*/
main(){
	

int i,max,min,aver,sum;
	 int a[10];
	 printf("请输入10个整数:\n");
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
	 		printf("最大值是：%d\n",max);
	 		printf("数组之和：%d\n",sum);
	 		printf("数组的平均值：%d",aver);
	 	}
