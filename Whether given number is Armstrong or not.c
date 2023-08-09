#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,rem,a,num,n=0;
    float res=0.0;
    printf("enter the number: \n");
    scanf("%d",&num);

    a=num;
    for(a=num;a!=0;++n)
    {
        a/=10;
    }
    for(a=num;a!=0;a/=10)
    {
        rem=a%10;
        res+=pow(rem,n);
    }

    if((int)res==num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);


    return 0;
}

