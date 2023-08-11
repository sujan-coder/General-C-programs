#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,sum=0;
    printf("The numbers between 100 and 200 which are divisible by 9:\n");
for(i=100;i<=200;i++)
{
    if(i%9==0)
    {
        int a=i;
        printf("%d ",i);
        sum=sum+a;

    }

}

printf("\nsum= %d",sum);

    return 0;
}
