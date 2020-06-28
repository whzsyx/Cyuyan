#include <stdio.h>
#define PI 3.1416
int main()
{
	float r,h;
	printf("请输入半径和圆柱的高，如：1.5,3\n");
	scanf("%f,%f",&r,&h);
	printf("圆的周长=%.2f\n",2*PI*r);
	printf("圆的面积=%.2f\n",PI*r*r);
	printf("圆球的表面积=%.2f\n",4*PI*r*r);
	printf("圆球的体积=%.2f\n",(4.0/3)*PI*r*r*r);
	printf("圆柱的体积=%.2f\n",PI*r*r*h);
	return 0;
}

