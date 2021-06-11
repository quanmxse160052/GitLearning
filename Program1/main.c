#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool isPrime(int n);
void printPrime(int n);
int main()
{
    int n = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if(isPrime(i))
            printPrime(i);
    }
     getchar();
    return 0;
}
bool isPrime(int n)
{
    if(n < 2)
        return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;

    return true;
}
void printPrime(int n)
{
    printf("%d\t",  n);
}
