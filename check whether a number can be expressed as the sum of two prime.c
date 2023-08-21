
#include <stdio.h>
#include <stdlib.h>


int sumprime(int n)
{
    int i,prime=1;
    for(i=2;i<=n/2;++i)
    {
       if(n%i==0)
       {
           break;
       }
    }
    return prime;
}
    

int main()
{
    int i,n;
    printf("Enter the number: \n");
    scanf("%d",&n);
   int flag=0;
    for(int i=2;i<=n/2;++i)
    {
     if(sumprime(i)==1)
     {
         if(sumprime(n-i)==1)
         {
             printf("%d prime number is the sum of %d and %d",n,i,n-i);
             flag=1;
         }
     }
     }
    if(flag==0)
        printf("not possible");
     return 0;
}

- - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

#include<stdio.h>
int sum_of_two_primes(int n);
int main()
{
    int n, i;

    printf("Insert the num: ");
    scanf("%d", &n);
    int flag = 0;
    for(i = 2; i <= n/2; ++i)
    {
        // Condition for i to be prime
        if(sum_of_two_primes(i) == 1)
        {
            if(sum_of_two_primes(n-i) == 1)
            {
                printf("%d can be expressed as the sum of %d and %d", n, i, n-i);
                flag = 1;
            }

        }
    }

    if(flag == 0)
        printf("%d cannot be expressed as the sum of two primes\n", n);
    return 0;
}

int sum_of_two_primes(int n)
{
    int i, isPrime = 1;
    for(i = 2; i <= n/2; ++i)
    {
       if(n % i == 0)
       {
          isPrime = 0;
          break;
       }
    }
    return isPrime;
}




