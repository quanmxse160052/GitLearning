#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, x = 0;
    do{
        printf("Enter x to add: ");
        scanf("%d", &x);
        if(x != 0)
            sum+=x;
    }
    while (x != 0);
        printf("Sum = %d", sum);
    return 0;
}
