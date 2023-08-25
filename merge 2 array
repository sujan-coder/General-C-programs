#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n1,n2;
    printf("enter the size of array 1:");
    scanf("%d",&n1);
    printf("enter the size of array 2:");
    scanf("%d",&n2);

    int mrg[n1+n2],a[n1],b[n2];

    printf("enter the array 1 elements:\n");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&a[i]);
    mrg[i]=a[i];
    }

     printf("enter the array 2 elements:\n");
    for(i=0;i<n2;i++)
    {
    scanf("%d",&b[i]);
    mrg[n1+i]=b[i];
    }
    printf("Merged\n");
    for(i=0;i<n1+n2;i++)
    {
    printf("%d ",mrg[i]);
    }
    return 0;
}

