#include <stdio.h>
int main()
{ 
    int num; 
   
    for(;;)
    {
        printf("ENTER AN NUMBER:");
        scanf("%d", &num);
        printf("num=%d\n",num);
        if(num%2!=0){
            printf("you entered an odd number:%d\n", num);
            
            break;


        }
       
    }
  
     return 0;
}