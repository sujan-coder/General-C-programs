#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("enter the number of terms \n");
    scanf("%d",&n);
    printf("The numbers are:\n");
    for(i=1;i<=n;i++)
        {
         printf("%d\n",2*i-1);
         sum+=2*i-1;

         }
    printf("sum=%d",sum);


    return 0;
}
