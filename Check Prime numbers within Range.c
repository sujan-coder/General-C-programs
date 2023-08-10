#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,b,j;
    printf("Range from:");
    scanf("%d",&a);
    printf("Till:");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
    {
         int flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("\n%d is a prime number",i);

    }
    return 0;
}
