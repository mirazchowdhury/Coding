#include<stdio.h>
int main()
{
    int miraz,miraz2;
    printf("enter 2 numbers:");
    scanf("%d%d",&miraz,&miraz2);
    if(miraz<miraz2)
        printf("%d\n",miraz);
    else if(miraz2<miraz)
        printf("%d/n",miraz2);
    else
        printf("equal");
}
