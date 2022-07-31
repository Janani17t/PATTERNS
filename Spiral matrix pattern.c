#include<stdio.h>
int main(){
	int r,c,i,j,k;
	printf("Enter the number of row: ");
	scanf("%d",&r);
	printf("Enter the number of column: ");
	scanf("%d",&c);
	int mat[r][c];
	for(i=0;i<r;i++){
	    for(j=0;j<c;j++){
	        scanf("%d",&mat[i][j]);
	    }
	}
	
	int row_start=0,col_start=0,row_end=r,col_end=c;
	while(row_start<row_end && col_start<col_end){
	    //printing top row i.e left to right--->
	    for(j=col_start;j<col_end;j++){
	        printf("%d ",mat[row_start][j]);
	    }row_start++;
	    //printing side row i.e top to bottom
	    for(i=row_start;i<row_end;i++){
	        printf("%d ",mat[i][col_end-1]);
	    }col_end--;
	    //printing bottom row i.e right to left <----
	    for(j=col_end-1;j>=col_start;j--){
	        printf("%d ",mat[row_end-1][j]);
	    }row_end--;
	    //printing side row i.e bottom to top
	    for(i=row_end-1;i>=row_start;i--){
	        printf("%d ",mat[i][col_start]);
	    }col_start++;
	}
}
	
