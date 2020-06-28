#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	char whz[7][7];
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(i+j==3 || abs(i-j)==3 || i+j ==9)
				whz[i][j]='*';
			else
				whz[i][j]=' ';
			printf("%c",whz[i][j]);
			
		}
		printf("\n");
	}
 } 
