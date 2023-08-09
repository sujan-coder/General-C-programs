#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k=1,s;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=k;
        printf("%d",k);
        if(i<n)
        {
            printf(" + ");
        }
        else
        {
            printf(" ");
        }
        k=(k*10)+1;
    }
printf("\nsum=%d ",s);
    return 0;
}
