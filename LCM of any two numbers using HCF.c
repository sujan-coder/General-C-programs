#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,hcf,lcm;
    printf("Enter two numbers:\n ");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;++i)
    {

        if(a%i==0 && b%i==0)
            hcf=i;
    }
    lcm=(a*b)/hcf;
    printf("LCM of %d and %d is: %d",a,b,lcm);


    return 0;
}
