#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float sum=0.0;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
        printf("1/%d + ",i);      // to print + 
        }
        else
        {
            printf("1/%d ",i);
        }

        sum=sum+1/(float)i;
    }
printf("\nHarmonic Series Sum = %f",sum);


    return 0;
}
