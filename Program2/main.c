#include <stdio.h>
#include <stdlib.h>
void printFibonacci(int n);
int checkValidDate (int d, int m, int y);
int main()
{
    int choice = 0, num = 0, day = 0, month = 0, year = 0;
    do
    {
        printf("1-Fibonacci sequence\n2-Check a date\n3-Quit\n");
        printf("Select your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            do
            {
                printf("Enter a number to print n's first fibonacci numbers: ");
                scanf("%d", &num);
            }
            while(num < 1);
            printFibonacci(num);
            break;
        case 2:

            printf("Enter the date:\n");
            printf("Day: ");
            scanf("%d", &day);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);

            if(checkValidDate(day, month, year))
                printf("Date valid\n");
            else
                printf("Date invalid\n");

            break;
        case 3:
            break;


        }



    }
    while(choice > 0 && choice < 3);

    getchar();
    return 0;
}
void printFibonacci(int n)
{
    int f1 = 1;
    int f2 = 1;
    int temp = 0;
    if(n == 1)
        printf("%d", f1);

    printf("%d\t%d\t", f1, f2);
    for (int i = 3; i <= n; i++)
    {

        temp = f2;
        f2 = f1 + f2;
        f1 = temp;
        printf("%d\t", f2 );
    }
    printf("\n\n");
}

int checkValidDate(int d, int m, int y)
{
    int maxd = 31;
    if(d < 1 || d > 31 || m < 1 || m > 12)
        return 0;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        maxd = 30;
    else if(m == 2)
    {
        if( m % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            maxd = 29;
        else maxd = 28;
    }

    return d <= maxd;
}
