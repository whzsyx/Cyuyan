#include <stdio.h>
#define PI 3.1416
int main()
{
	float r,h;
	printf("������뾶��Բ���ĸߣ��磺1.5,3\n");
	scanf("%f,%f",&r,&h);
	printf("Բ���ܳ�=%.2f\n",2*PI*r);
	printf("Բ�����=%.2f\n",PI*r*r);
	printf("Բ��ı����=%.2f\n",4*PI*r*r);
	printf("Բ������=%.2f\n",(4.0/3)*PI*r*r*r);
	printf("Բ�������=%.2f\n",PI*r*r*h);
	return 0;
}

