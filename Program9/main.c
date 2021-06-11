#include <stdio.h>
#include <stdlib.h>
void printResult(int a, int b);
int leastMultiple(int a1, int a2);
int greatestDivisor(int a1, int a2);
int main()
{
    int a = 0, b = 0;
    printf("Enter two number to calculate greatest divisor and least multiple");
    do
    {
        printf("\na: ");
        scanf("%d", &a);

        printf("b: ");
        scanf("%d", &b);
    }
    while(a <= 0 || b <= 0);
        printResult(a, b);
     getchar();
    return 0;
}
void printResult(int a, int b)
{
    printf("Greatest divisor: %d",greatestDivisor(a, b));
    printf("\nLeast multiple: %d", leastMultiple(a, b));
}
int leastMultiple(int a1, int a2)
{
    return a1 * a2 / greatestDivisor(a1, a2);
}
int greatestDivisor(int a1, int a2)
{
    while(a1 != a2)
    {
        if(a1 > a2)
            a1 -= a2;
        else
            a2 -= a1;
    }
    return a1;
}
