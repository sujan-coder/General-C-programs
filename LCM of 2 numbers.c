#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,i,lcm,max,fact=1;
    printf("Enter the two digits:\n");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;

    for(;fact;)
    {
        if(max%a==0 && max%b==0)
        {
        printf("The LCM of %d and %d is: %d",a,b,max);
        fact=0;
        }
        max++;

    }

    return 0;
}
