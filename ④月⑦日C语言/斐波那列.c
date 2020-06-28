#include<stdio.h>
#define N 30
int main()
{
	int i;
	int f[N]={1,1};
	for(i=2;i<N;i++)
		f[i]=f[i-1]+f[i-2];
	for(i=0;i<N;i++)
	{
	if (i%5==0)
	{
		printf("\n");
	}
	printf("%7d",f[i]);
	}
	 printf("\n");
}
