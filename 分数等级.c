#include<stdio.h>
int main()
{
	float s;
	printf("�����������\n");
	scanf("%f",&s);
	if(s>=90)
	    printf("�ȼ�Ϊ��");
	else
	    if(s>=80)
			printf("��");
		else
			if(s>=70)
				printf("��");
			else
			if(s>=60)
				printf("��");
			else
				printf("����");	 
 } 
