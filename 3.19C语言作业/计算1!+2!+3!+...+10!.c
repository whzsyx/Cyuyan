#include <stdio.h>
int main()
{

    int x,y=1,z=0;
    for (x=1;x<=10;x++)
    {
        y*=x;
        z+=y;
    }
    printf("1!+2!+....+10!=%d\n",z);
}
