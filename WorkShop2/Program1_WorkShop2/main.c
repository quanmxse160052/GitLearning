#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1 = 0, result = 0, num2 = 0;
    char op;
    printf("Enter a simple expression to calculate (+ - * /): ");
    scanf("%lf\n%c\n%lf", &num1,&op,&num2);
    switch(op)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %lf %c %lf = %lf", num1, op, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %lf %c %lf = %lf", num1, op, num2, result);
        break;
    case '*':
        result = num1 *num2;
        printf("Result: %lf %c %lf = %lf", num1, op, num2, result);
        break;
    case '/':
        if(num2 != 0){
            result = num1/num2;
            printf("Result: %lf %c %lf = %lf", num1, op, num2, result);
        }
        else
            printf("Cannot calculate this expression (num two = 0)");
        break;
    default:
        printf("Operator is not supported");
    }

    return 0;
}
