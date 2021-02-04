#include<stdio.h>
int main()
{
    int a=30;
    int b=40;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a =%d\n",a);
    printf("b =%d\n",b);
}
