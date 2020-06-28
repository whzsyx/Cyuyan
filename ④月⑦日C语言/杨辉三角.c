/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
   int c,i,j,k;
   for (i=0;i<10;i++)
   {
     for (k=1;k<10-i;k++) 
       printf("%3c",' ');
     c=1;
     for (j=0;j<=i;j++)
     {
        printf("%3d",c);
        printf("%3c",' ');
        c=c*(i-j)/(j+1);
     }
     printf("\n");
   } 
}