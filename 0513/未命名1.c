#include<stdio.h>

#define N 10

main()

{

int a[N]={0};

float avg=0;

int i=0,j=0,sum=0;

for(i=0;i<N;i++)

{

scanf("%d",&a[i]);

}

for(i=0;i<N;i++)

{

sum=sum+a[i];

}

avg=sum/N;



printf("avg=%.3f\n",avg);

return 0;

}
