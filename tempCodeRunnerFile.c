#include<stdio.h>
int main()
{ 
    int n;
    for(;;){
        printf("enter number");
        scanf("%d\n",&n);
        printf("number is %d",n);
        if (n%2 != 0){
            printf("thank you%d",n);
            break;
        }
    } 
    return 0;
}