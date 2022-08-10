/*
if n=4
****
***
**
*
is the pattern
*/
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }printf("\n");
    }return 0;
    
}
