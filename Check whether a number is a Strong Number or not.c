#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num,ld,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
    ld=num%10;
    int fact=1;
    for(i=1;i<=ld;i++)
    {
        fact = fact*i;
    }
    sum+=fact;
    num=num/10;

    }

    if(sum==n)
    {

        printf("%d is a strong number",n);
    }
    else
        printf("Not a perfect number");

    return 0;
}
