
#include <stdio.h>

void main()
{
    int num,r,sum,temp;
    int a,b;

    printf("Input starting number of range: ");
    scanf("%d",&a);

    printf("Input ending number of range : ");
    scanf("%d",&b);

    printf("Armstrong numbers in given range are: ");
    for(num=a;num<=b;num++)
        {
         temp=num;
         sum = 0;

         while(temp!=0)
            {
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
            }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}
