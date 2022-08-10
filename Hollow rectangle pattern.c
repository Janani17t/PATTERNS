#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0 || i==r-1 || j==0 || j==c-1){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
  return 0;
}
