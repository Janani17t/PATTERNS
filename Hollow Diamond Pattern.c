#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter a number to print hollow diamond pattern: ");
	scanf("%d",&n);
	int outer_space=n/2;
	int inner_space=1;
	for(i=0;i<n;i++){
		for(j=0;j<outer_space;j++){
			printf(" ");}
		if(i==0 || i==n-1){
			printf(" *");
		}
		else{
			printf("*");
			for(j=0;j<inner_space;j++){
				printf(" ");
			}
			printf("*");
		}
		if(i<n/2){
			outer_space--;
			inner_space+=2;
		}
		else{
			outer_space++;
			inner_space-=2;
		}printf("\n");
	}
}
		
	
