
#include<stdio.h>

int main()

{

int i,j,a[10],t;

printf("����10������\n");

for (i = 0; i < 10; i++)

scanf("%d",&a[i]);

for (i = 0; i < 10; i++)

{

for (j = i + 1; j < 10;j++) 

if (a[i] < a[j]){

t = a[i];

a[i] = a[j];

a[j] = t;

}
}

printf("�Ӵ�С");

for (i = 0; i < 10; i++)



printf("%4d", a[i]);

return 0;


}
