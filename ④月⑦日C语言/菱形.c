#include<stdio.h>

main()

{

int i,j,n;

printf("please input your number:"); scanf("%d",&n);

for(i=1;i<=n;i++)

{

for(j=1;j<=n+i-1;j++)

if(j==n+1-i||j==n-1+i) printf("*"); else

printf(" ");

printf("\n");

}

for(i=1;i<n;i++)

{


 
for(j=1;j<=2*n-1-i;j++)

if(j==i+1||j==2*n-1-i) printf("*"); else

printf(" ");

printf("\n");

}

}
