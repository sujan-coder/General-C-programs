#include <stdio.h>
#include <math.h>

int main() {
    int num,i, r, sum, temp;
    int a,b;

    printf("Input starting number of range: ");
    scanf("%d", &a);

    printf("Input ending number of range: ");
    scanf("%d", &b);

    printf("Armstrong numbers in the given range are: ");
    for (i=a; i<=b3; i++)
        {
        temp = i;
        sum = 0;

        int numDigits = 0;
        int Num = i;

        while (Num != 0)
            {
            Num /= 10;
            numDigits++;
        }

        temp = i;

        while (temp != 0)
            {
            r = temp % 10;
            temp /= 10;
            sum += pow(r, numDigits);
        }

        if (sum == i)
            printf("%d ", i);
        }

    printf("\n");

    return 0;
}
