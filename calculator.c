
#include <stdio.h>

int main()
{
    char option;
    float a,b,result=0;
    printf ("enter+,-,*,/ for performing calculation\n");
    scanf("%c",&option);
    printf("\n enter number\n");
    scanf("%f%f",&a,&b);
    switch(option)
    {
        case'+':
        result=a+b;
        break;
        case '-':
        result=a-b;
        break;
        case '*':
        result=a*b;
        break;
        case '/':
        result=a/b;
        break;
        default:
        printf("invalid operation\n");
    }
     printf("%.2f%c%.2f=%.2f",a,option,b, result);
     return 0;
}