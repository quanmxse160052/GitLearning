#include <stdio.h>
#include <stdlib.h>
void printMinMaxDigits(int n);
int main()
{
    int n;
    printf("Enter a number to know min, max digits:\n");

    do
    {
        printf("n: ");
        scanf("%d", &n);
    }
    while (n < 0);
    printMinMaxDigits(n);
    getchar();
    return 0;
}
void printMinMaxDigits(int n)
{
    int min, max, remainder;
    remainder = n % 10;
    n /= 10;
    min = remainder;
    max = remainder;
    while (n > 0)
    {
        remainder = n % 10;
        if(min > remainder) min = remainder;
        if(max < remainder) max = remainder;
        n /= 10;
    }
    printf("Max digit: %d\nMin digit: %d", max, min);
}
