#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool validDate(int d, int m, int y);
int main()
{
    int day = 0, month = 0, year = 0;
    printf("Enter day/month/year to check: ");
    printf("\nDay:");
    scanf("%d", &day);
    printf("Month: ");
    scanf("%d", &month);
    printf("Year: ");
    scanf("%d", &year);
    if(validDate(day, month, year))
        printf("Valid date");
    else
        printf("Invalid date");

    getchar();
    return 0;
}
bool validDate(int d, int m, int y)
{
    int maxd = 31;
    if(d > 31 || d < 1 || m > 12 || m < 1)
        return false;
    else
    {
        if( m == 4 || m == 6 || m == 9 || m == 11)
            maxd = 30;
        else if( m == 2)
            if( y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
                maxd = 29;
            else
                maxd = 28;
    }
    return d <= maxd;

}
