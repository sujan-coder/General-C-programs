#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float sum=1,t=1,d,x;
    printf("Enter the X value: ");
    scanf("%f",&x);
    printf("Enter the no.of terms: \n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    d=(2*i)*(2*i-1);
    t=-t*x*x/d;
    sum=sum+t;
    }
    printf("sum=%f\nNo.of terms=%d\nValue of x= %f\n",sum,n,x);
    return 0;
}


