#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n1=0,n2=1,n,a;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The first %d terms of the Fibonacci series are :",n);

    for(i=0;i<=n;i++)
    {
     if(i<=1)
     a=i;
     else
        {
       a=n1+n2;
       n1=n2;
       n2=a;
        }
printf(" %d",a);
    }
    printf("\n");
    return 0;
}
