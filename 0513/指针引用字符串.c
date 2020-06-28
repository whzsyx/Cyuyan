#include <stdio.h>
//方法一： %s
/*
main()
{
	char str[] = "I love China";
	printf("%s\n",str);
	printf("%c\n",str[7]);
}
*/
/*
main()
{
	char *string = "Shang Xue";
	printf("%s\n",string); 
	char *string1 = "Shang Ye";
	printf("%s",string1);
}
*/
main()
{
	char s[101];
	printf("请输入你想要输入的：\n");
	while(gets(s),s[0]!=0)
		puts(s);
}
