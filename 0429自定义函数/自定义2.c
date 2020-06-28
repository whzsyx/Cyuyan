#include<stdio.h>
#include<stdlib.h>
long fac(int n)
{
	long f;
	if (n<0)
	printf("´íÎóÊý¾Ý"); 
	exit(0);
	else if(n==0||n==1)
		return f =1;
	else
	return f =n*fac(n-1);
 } 
 int main()
 {
 	int m;
 	printf("m=");
 	scanf("%d",&m);
 	printf("%d!=%d",m,fac(m));
 	return 0;
 }
