#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,b,sum,j;

    printf("enter the sequence from: \n");
    scanf("%d",&a);
    printf("Till:\n");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
{
    sum=0;
    for(j=1;j<i;j++)
    {
    if(i%j==0)
    {
        sum+=j;
    }

    }
    if(sum==i)
    {
    printf("%d is a perfect number\n",i);
    }
}
    return 0;
}
