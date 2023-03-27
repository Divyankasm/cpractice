#include<stdio.h>
#include<conio.h>
int main()
 {int i,j;
 for(i=0;i<=4;i++)
 {
  for(j=0;j<i;j++)
  {
   if((i+j)%2==0)
   {
  printf("\t 0");
   }
 else
 {
  printf("\t 1");
 }
  }
 printf("\n");
 }
getch();
return 0;
}