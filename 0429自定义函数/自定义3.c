#include <stdio.h>
long fac(int n);
main()
{
	int m;
	printf("Input m=");
	scanf("%d",&m);
	printf("%d! = %d\n",m,fac(m));
	
 } 
 long fac(int n)
 {
 	int i;
 	long f=1;
 	for (i=1;i<=n;i++)
 	{
 		f*=i; 
	 }
	 return f;
 }
