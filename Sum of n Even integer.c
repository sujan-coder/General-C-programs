#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0,s;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     s=(i*(i+1));
        printf("%d ",s);
       sum=sum+s;
    }
    printf("\nsum=%d",sum);

    return 0;
}


OR



#include<stdio.h>
void main()
{
 //Declaring Variable
  int n, i, sum = 0 ;

//Input Number
 printf("Enter a Number\n");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
  {   if(i%2==0)
      { sum = sum + i;
      }
  }
  printf("\nSum of first %d even Numbers: %d",n,sum);

}
