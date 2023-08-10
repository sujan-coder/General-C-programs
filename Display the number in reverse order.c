#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,rev=0,rem;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    printf("Reversed number= ");
    for(;n!=0;n=n/10)
     {
         rem=n%10;
         rev=rev*10+rem;

     }
     printf("%d",rev);
    return 0;
}
