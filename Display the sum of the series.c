#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int i,s,sum=0,n,j,t=9;
    printf("enter the (9) sequence:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
      sum+=t;
      printf("%ld",t);
      t=(t*10)+9;


        if(i<n)
        {
            printf(" + ");
        }
        else
        {
        printf(" ");
        }
    }

   printf("\nsum=%d",sum);
    return 0;
}
