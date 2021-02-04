#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    avg = (float)sum/3;
    printf("%d\n",sum);
    printf("%d\n",avg);
    return 0;

}
