#include <stdio.h>
//函数原型声明——函数头;
void Hanoi(int n,char a,char b,char c);
void Move(int num, char from, char to);
//主函数
int main(void)
{
    int n;
    printf("Input the number of disk : ");
    scanf("%d", &n);
    printf("The step of moving %3d disk : \n", n);
    //函数调用
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}
//自定义函数
/*
	将第n个盘子从源木桩A，借助与木桩C移动到目的木桩B
    	整型变量n，表示第n个盘子
    	字符型变量a，表示源木桩a
    	字符型变量b，表示目的木桩b
    	字符型变量c，表示过渡木桩c
*/
//递归函数
void Hanoi(int n,char a,char b,char c)
{
    if(n==1) 
        Move(n,a,b);            // 第n 个盘子由a->b
    else 
    {
        Hanoi(n-1,a,c,b);       // 将第n-1个盘子,借助与b由a移动到c
        Move(n,a,b);            // 第n 个盘子由a->b
        Hanoi(n-1,c,b,a);       // 将第n-1个盘子,借助与b由a移动到c
    }
}

// 显示第n个盘子从from木桩到to木桩的移动过程
void Move(int num, char from, char to)
{
    printf("Move %d : from %c to %c\n", num, from, to);
}
