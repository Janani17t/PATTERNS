#include <stdio.h>

int main()
{
    int n,i,j,start=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            printf("%d ",start);
            start+=(n-j);
        }
        start=i+2;
        printf("\n");
    }
}
