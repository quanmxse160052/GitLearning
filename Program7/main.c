#include <stdio.h>
#include <stdlib.h>
int sumDigits(int n);
int main()
{
    int n = 0;
    do
    {
        printf("Enter a number to calculate sum of its digits: ");
        scanf("%d", &n);
        if(n >= 0)
            printf("Sum of %d's digits is: %d\n", n, sumDigits(n));
    }
    while(n >=0);
    getchar();
    return 0;
}
int sumDigits(int n)
{
    int sum = 0;
    for(int i = n; i > 0; i /= 10 )
    {
        sum += i % 10;
    }
    return sum;
}
