#include <stdio.h>
#include <stdlib.h>
double fibo(int n);
int main()
{
    int n = 0;
    printf("Enter the position of fibonacci value you want to know: ");
    do
    {
        printf("n: ");
        scanf("%d", &n);
    }
    while(n < 1);
    printf("Value of fibonacci number at %d is %.1lf", n,fibo(n));
    getchar();
    return 0;
}
double fibo(int n)
{
    double f1 = 1, f2 = 1, temp = 0;
    for(int i = 3; i <= n; i++)
    {
        temp = f2;
        f2 = f2 + f1;
        f1 = temp;
    }
    return f2;
}


