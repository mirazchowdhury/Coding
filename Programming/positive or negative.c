#include<stdio.h>
int main()
{
    int miraz;
    printf("Enter any number :");
    scanf("%d",& miraz);
    if(miraz>0)
        printf("positive");
    else if(miraz<0)
        printf("negative");
    else
        printf("0");
}
