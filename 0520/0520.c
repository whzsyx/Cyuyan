//1.将字符串a复制给字符串b然后输出字符串b //地址法 
#include <stdio.h>
#include <string.h>
/* 
main()
{
	int i;
	char a[]="xue 520 快乐.",b[31];
	printf("Array a length = %d\n",strlen(a));
	for (i=0;*(a+i)!='\0';i++)
		*(b+i) = *(a+i);//将a[i]赋值给b[i] 
	*(b+i) = '\0';     //在数组b内容之后加上空白字符 
	printf("String a is :%s\n",a);
	for (i=0;b[i]!='\0';i++)
		printf("%c",b[i]);
}
*/
/*2.指针法*/
/* 
main()
{
	char *pa,*pb;
	char a[]="xue 520 快乐.",b[31];
	pa = a;
	pb = b;
	for(;*pa!='\0';pa++,pb++)
		*pb = *pa;
	*pb = '\0';
	printf("String a is : %s\n",a);
	printf("String b is : %s\n",b);



} 
*/
//输出12个月(数组法)

/*main()
{
	int i;
	char *month[] = 
	{
		"January",
		"February",
		"March",
		"April",
		"May",
	};
	for (i=0;i<5;i++)
		printf("%s\n",month[i]);
 } 
 
*/ 
 main()
{
	int i;
	char **p;
	
	char *month[] = 
	{
		"January",
		"February",
		"March",
		"April",
		"May",
	};
	for (i=0;i<5;i++)
	{
		p = month+i;
		
		printf("%s\n",*p);
	}
	
 } 
 
 
 
 
 
