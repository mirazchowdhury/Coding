#include<stdio.h>
int main()
{
    double a,b;
    char op;


    printf("Enter an operator(+,-,*,/,) :");
    scanf("%c",&op);
    printf("Enter 2 numbers :");
    scanf("%lf %lf",&a,&b);

    switch(op)
    {
         case '+':
         {
             printf("%lf + %lf = %lf\n",a,b,a+b);
             break;
         }
         case '-':
         {
             printf("%lf - %lf = %lf\n",a,b,a-b);
             break;
         }
         case '*':
         {
             printf("%lf * %lf = %lf\n",a,b,a*b);
             break;
         }
         case '/':
         {
             printf("%lf / %lf = %lf\n",a,b,a/b);
             break;
         }

    default :
        printf("Not a valid operator");
    }

}
