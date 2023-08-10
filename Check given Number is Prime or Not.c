#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    int flag=1;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            flag=0;
            break;

    }
    if(flag)
    {
        printf("%d is a prime number",n);

    }
    else
        printf("%d not a prime number",n);


    return 0;
}
