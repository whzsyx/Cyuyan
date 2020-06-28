//要求任意输入10个数，然后按从小到大顺序输出
#include <stdio.h>
int main()
{
	int a[10];
	int i,j;
	int temp;
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("排列后顺序为：");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
