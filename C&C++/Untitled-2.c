#include <stdio.h>
int main() {
//    int i, rows,space,k;
//     printf("enter no of rows");
//     scanf("%d",&rows);
//    for (i = 1; i <= rows; i++) {
//       for (space = 1; space <=(rows5-i); space++) {
//          printf("  ");
//       } 
//       for(k=1;k<=i;k++){
//         printf("* ");
//       }
      
//       printf("\n");
//    }
//    return 0;
// }
    
	int n,i,j;
			
				printf("Enter the limit :  ");
				scanf("%d",&n);
				for(i=1;i<=n;i++){
					for(j=1;j<=n;j++){
						if(i+j<=n){
							printf(" ");
						}
						else{
							printf("*");
							printf(" ");
						}
					}
					printf("\n");
				}
	return 0;
}