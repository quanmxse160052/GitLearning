#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int printPrimeNumber(int n);
void printMinMaxNumbers(int n2);
int main()
{
    int choice = 0;
    int num = 0;
    int num2 = 0;
    do
    {
        printf("1-Process primes\n2-Print min max digit in an integer\n3-Quit\nSelect an operation:");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:

            do
            {
                printf("Enter an number to check: ");
                scanf("%d", &num);
            }
            while(num < 1);
            if(printPrimeNumber(num) == 1)
                printf("%d is a prime number\n\n", num);
            else
                printf("%d is not a prime number\n\n", num);
            break;


        case 2:

            do
            {
                printf("Enter a number to check min, max digits: ");
                scanf("%d", &num2);

            }
            while( num2 < 0);
            printMinMaxNumbers(num2);
            break;

        }
    }
    while (choice > 0 && choice < 3);

    getchar();
    return 0;
}
int printPrimeNumber(int n)
{
    if (n < 2 )
        return 0;


    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
void printMinMaxNumbers(int n2)
{
    int min, max;
    int remainder;
    remainder = n2 % 10;
    n2 /= 10;
    min = remainder;
    max = remainder;
    while( n2 > 0)
    {
        remainder = n2 % 10;
        n2 /= 10;
        if(min > remainder) min = remainder;
        if(max < remainder) max = remainder;
    }
    printf("Min digit: %d\nMax: %d\n", min, max);

}
