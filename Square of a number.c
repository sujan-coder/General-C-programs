#include <stdio.h>
#include <stdlib.h>
void s();
void s()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    n*=n;
    printf("Square of number= %d",n);
}
int main()
{
    s();
    return 0;
}
