#include<stdio.h>
/* 
int main()
{
	int i;
	int f1=1,f2=1;
	for(i=1;i<=10;i++)
	{
		printf("%101d%101d",f1,f2);
		f1=f1+f2;
		f2=f2+f1;
		if(i%2==0)
			printf("\n");
	}
 }
 */
 #include<stdio.h>
 int main()
 {
 	int i,m;
 	printf("Input int m=");
 	scanf("%d",&m);
 	for(i=1;i<=m;i++)
 	{
 		printf("%10d",Fib(i));
 		if(i %5==0)
 		printf("\n");
 	
	 }
	 return 0;
 }
 //µÝ¹éº¯Êý
 int Fib(int n)
 {
 	if(n ==1 || n==2)
 		n =1;
 	else
 		n = Fib(n-1) +Fib(n-2);
 	return n;
  } 
