//n=4
//print the following pattern
/* 1*****1
   *2***2*
   **3*3**
   ***4***
   **3*3**
   *2***2*
   1*****1   */
#include<stdio.h>
int main(){
  int n,i,j,start=1;
  scanf("%d",&n);
  for(i=0;i<(n*2)-1;i++){
    for(j=0;j<(n*2)-1;j++){
      if(i==j || (i+j)==(n*2)-2){
        printf("%d",start);
      }
      else{
        printf("*");
      }
    }printf("\n");
    if(i<n-1){
      start++;
    }
    else{
      start--;
    }
  }return 0;
}
