#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k,sum=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i*i;
        printf("%d ",k);
        sum+=k;
    }
    printf("\nsum=%d",sum);


    return 0;
}
