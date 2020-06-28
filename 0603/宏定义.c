
#include<stdio.h>
//#define PI 3.14159
//1.宏定义计算面积周长
/*
main()

{
	int r;
	double zc,mj;
	printf("input r=");
	scanf("%d",&r);
	zc = 2*PI*r;
	mj = PI*r*r;
	printf("圆的面积:%8.2f\n",mj);
	printf("圆的周长:%8.2f\n",zc);
 } 
 */
 
 
 
 
 
 //2.输入两个整数，求最小数。要求用宏定义
 /*
 #define MIN(x,y) x < y ? x : y
 main()
 {
 	int a,b,min;
 	printf("请输入两个整数:\n");
 	scanf("%d%d",&a,&b);
 	min=MIN(a,b);
 	printf("MIN(%d,%d)=%d",a,b,min);
 }
 */
 
 
 
 
 
 
 
 //3.输入两个整数，求最大值(宏定义) 
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
 
 
 
 
 
 
 //4.输入三个整数，求最小数。要求用宏定义。
 /*
 #define MIN(x,y) x<y?x:y
 main()
 {
 	int a,b,c,min1,min2;
 	printf("请输入3个整数：\n");
 	scanf("%d%d%d",&a,&b,&c);
 	min1=MIN(a,b);
 	min2=MIN(min1,c);
 	printf("MIN(%d,%d,%d)=%d",a,b,c,min2);
 }
 
 */
 
 
 
 
 
 //5.输入三个整数，求最大数。要求用宏定义。
 /*
 #define MAX(x,y) x>y ?x:y
 main()
 {
 	int a,b,c,max1,max2;
 	printf("请输入3个整数：\n");
 	scanf("%d%d%d",&a,&b,&c);
 	max1=MAX(a,b);
 	max2=MAX(max1,c);
 	printf("MAX(%d,%d,%d)=%d",a,b,c,max2);
 }
 */
 
 
 //6.求两个整数的余数，输出结果
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
 
 
 
 
 
 //7.从键盘输入一个圆锥的半径和高度，通过宏定义求出圆锥体积。
 #define PI (3.1415926)
 main()
 {
 	double r,h;
 	printf("请输入圆锥的半径(r)、高度(h)");
 	scanf("%lf %lf",&r,&h);
 
 	printf("圆锥的体积是:%.2lf",1.0/3*PI*r*r*h);
 }
 
 
 
 
 /*8.若有定义：char str[20] = “C language”;
  编写程序将字符串全部转换为大写。
  要求：用条件编绎
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
 
 
 
 
 
 
 
