#include <stdio.h>
#include <stdlib.h>
int isFibonacci(int n);
int main()
{
    int n = 0;
    printf("Enter the fibonacci number to check: \n");
    do
    {
        printf("n: ");
        scanf("%d", &n);
    }
    while(n < 1);
    if(isFibonacci(n))
        printf("%d is a fibonacci number", n);
    else
        printf("%d is not a fibonacci number", n);
     getchar();
    return 0;
}
int isFibonacci(int n)
{
    int f1 = 1, f2 = 1, temp = 0;
    if (n == 1)
        return 1;
    else
        while( f2 < n)
        {
            temp = f2;
            f2 = f2 + f1;
            f1 = temp;

        }
    return n == f2;
}
