#include <stdio.h>
#include <stdlib.h>
double makeDouble(int ipart, int fraction);
int main()
{
    int ipart = 0, fraction = 0;
    printf("Enter integral part:");
    scanf("%d", &ipart);

    do
    {
        printf("Enter fractional part:");
        scanf("%d", &fraction);

    }
    while (fraction < 0);
    printf("Real number: %lf", makeDouble(ipart, fraction));
    getchar();
    return 0;
}
double makeDouble (int ipart, int fraction)
{
    double d_f = fraction;
    while(d_f >= 1)
    {
        d_f /= 10;
    }
    if(ipart >= 0)
        return ipart + d_f;
    else
        return ipart - d_f;

}
