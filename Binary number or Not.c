/Check the given number is binary or not

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count,n,i;
    printf("enter the  number:");
    scanf("%d",&n);

    while (n!= 0)
    {
        int a=n%10;
        if (a!=0 &&7\] a!=1)
        {
            count=1;
            break;

        }
       n/=10;
    }
    if(count)
    {
        printf("Not a Binary number");

    }
    else
        {
        printf("Binary Number");
    }
    return 0;
}

