#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,b,hcf;
    printf("Enter the 2 numbers: \n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("HCF of %d and %d is: %d",a,b,hcf);

    return 0;
}
