#include<stdio.h>
int main()
{

    int i ,min=1,max=1000;
     printf("1000����ͬʱ���Ա�3��5���������У�\n");
 for(i=min;i<=max;i++)
 {
  if(0==i%3 && 0==i%5)
  {
   printf("%d ",i);
  }
 }
 printf("\n");
}
