
#include<stdio.h>
//#define PI 3.14159
//1.�궨���������ܳ�
/*
main()

{
	int r;
	double zc,mj;
	printf("input r=");
	scanf("%d",&r);
	zc = 2*PI*r;
	mj = PI*r*r;
	printf("Բ�����:%8.2f\n",mj);
	printf("Բ���ܳ�:%8.2f\n",zc);
 } 
 */
 
 
 
 
 
 //2.������������������С����Ҫ���ú궨��
 /*
 #define MIN(x,y) x < y ? x : y
 main()
 {
 	int a,b,min;
 	printf("��������������:\n");
 	scanf("%d%d",&a,&b);
 	min=MIN(a,b);
 	printf("MIN(%d,%d)=%d",a,b,min);
 }
 */
 
 
 
 
 
 
 
 //3.�������������������ֵ(�궨��) 
 /*
 #define MAX(x,y) x > y ? x : y
 main()
 {
 	int a,b,max;
 	printf("Input two int number:\n");
 	scanf("%d%d",&a,&b);
 	max = MAX(a,b);
 	printf("MAX(%d,%d) = %d\n",a,b,max);
  } 
 */
 
 
 
 
 
 
 //4.������������������С����Ҫ���ú궨�塣
 /*
 #define MIN(x,y) x<y?x:y
 main()
 {
 	int a,b,c,min1,min2;
 	printf("������3��������\n");
 	scanf("%d%d%d",&a,&b,&c);
 	min1=MIN(a,b);
 	min2=MIN(min1,c);
 	printf("MIN(%d,%d,%d)=%d",a,b,c,min2);
 }
 
 */
 
 
 
 
 
 //5.�����������������������Ҫ���ú궨�塣
 /*
 #define MAX(x,y) x>y ?x:y
 main()
 {
 	int a,b,c,max1,max2;
 	printf("������3��������\n");
 	scanf("%d%d%d",&a,&b,&c);
 	max1=MAX(a,b);
 	max2=MAX(max1,c);
 	printf("MAX(%d,%d,%d)=%d",a,b,c,max2);
 }
 */
 
 
 //6.������������������������
 /*
 #define MOD(x,y) x%y
 
 main()
 {
 	int a,b,mod;
 	printf("Input two int number:\n");
 	scanf("%d%d",&a,&b);
 	mod = MOD(a,b);
 	printf("MOD(%d,%d)=%d\n",a,b,a%b);
  } 
 */
 
 
 
 
 
 //7.�Ӽ�������һ��Բ׶�İ뾶�͸߶ȣ�ͨ���궨�����Բ׶�����
 #define PI (3.1415926)
 main()
 {
 	double r,h;
 	printf("������Բ׶�İ뾶(r)���߶�(h)");
 	scanf("%lf %lf",&r,&h);
 
 	printf("Բ׶�������:%.2lf",1.0/3*PI*r*r*h);
 }
 
 
 
 
 /*8.���ж��壺char str[20] = ��C language��;
  ��д�����ַ���ȫ��ת��Ϊ��д��
  Ҫ������������
  */
  /*
 #define FLAG 1 
 main() 
 {
 	int i=0;
	char c,s[]="C language";
 	while(c = s[i])
 	{
 		#if FLAG
 			if(c>='a'&&c<='z')
 				c -=32;
 		#else
 		
 		
 		#endif
 		printf("%c",c);
 		i++;
	 }
 }
 */
 
 
 
 
 
 
 
