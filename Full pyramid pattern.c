/* n = 5
    *
   ***
  *****
 *******
*********

*/
#include <stdio.h>

int main()
{
    int n,i,j,a=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            printf(" ");
        }
        for(j=0;j<a;j++)
        {
            printf("*");
        }
        a+=2;
        printf("\n");
        
    }return 0;
    
}
