#include <stdio.h>
#include <stdlib.h>
double factorial(int n);
int main()
{
    int n = 0;
    printf("Enter the number n to calculate factorial: \n");
    do
    {
        printf("n: ");
        scanf("%d", &n);

    }
    while (n < 0);
    printf("Factorial of %d is: %.1lf", n, factorial(n));
    getchar();
    return 0;
}
double factorial(int n)
{
    double p = 1;
    for(int i = 1; i <= n; i++)
        p*=i;
    return p;
}
