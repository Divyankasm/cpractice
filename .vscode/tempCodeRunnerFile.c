#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b=7,c=111;
    c/= (++a*b--); 
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
    return 0;
}
