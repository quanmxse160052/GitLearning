#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>
bool checkTriangle(double a, double b, double c);
double calculateArea(double a, double b, double c);
double calculateAngle(double a, double b, double c);
double calculatePerimeter(double a, double b, double c);
int main()
{
    double a = 0, b = 0, c = 0;
    printf("Enter three sides of a triangle: \n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);
    if(checkTriangle(a, b, c))
    {
        printf("The area of this triangle: %.2lf", calculateArea(a, b, c));
        printf("\nThe perimeter of this triangle: %.2lf", calculatePerimeter(a, b, c));
        printf("\nThree angle of this triangle: ");
        printf("\nAngle 1: %.2lf\nAngle 2: %.2lf\nAngle 3: %.2lf",
               calculateAngle(a, b, c), calculateAngle(a, c, b), calculateAngle(b, c, a));
    }
    else
        printf("This is not a triangle!");
    return 0;
}
double calculatePerimeter(double a, double b, double c)
{
    return a + b + c;
}
bool checkTriangle(double a, double b, double c)
{
    if(a + b > c && b + c > a && a + c >b)
        return true;
    else
        return false;
}
double calculateArea(double a, double b, double c)
{
    double p = 0;
    p = (a + b + c)/2;
    return sqrt(p * (p - a) * (p - b)* (p - c));
}
double calculateAngle(double a, double b, double c)
{
    return acos((a * a + b * b - c * c) / (2 * a * b))*180/M_PI;
}
