#include <stdio.h>
//����ԭ��������������ͷ;
void Hanoi(int n,char a,char b,char c);
void Move(int num, char from, char to);
//������
int main(void)
{
    int n;
    printf("Input the number of disk : ");
    scanf("%d", &n);
    printf("The step of moving %3d disk : \n", n);
    //��������
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}
//�Զ��庯��
/*
	����n�����Ӵ�Դľ׮A��������ľ׮C�ƶ���Ŀ��ľ׮B
    	���ͱ���n����ʾ��n������
    	�ַ��ͱ���a����ʾԴľ׮a
    	�ַ��ͱ���b����ʾĿ��ľ׮b
    	�ַ��ͱ���c����ʾ����ľ׮c
*/
//�ݹ麯��
void Hanoi(int n,char a,char b,char c)
{
    if(n==1) 
        Move(n,a,b);            // ��n ��������a->b
    else 
    {
        Hanoi(n-1,a,c,b);       // ����n-1������,������b��a�ƶ���c
        Move(n,a,b);            // ��n ��������a->b
        Hanoi(n-1,c,b,a);       // ����n-1������,������b��a�ƶ���c
    }
}

// ��ʾ��n�����Ӵ�fromľ׮��toľ׮���ƶ�����
void Move(int num, char from, char to)
{
    printf("Move %d : from %c to %c\n", num, from, to);
}
