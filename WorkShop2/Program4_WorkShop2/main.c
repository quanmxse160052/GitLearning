#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, y = 0;
    do{
        printf("Swap x and y!\n");
        printf("Enter x: ");
        scanf("%d", &x);
        printf("Enter y:");
        scanf("%d", &y);
        x = x + y;
         y = x - y;
         x = x - y;
         printf("x: %d\ny: %d\n", x, y);
    } while (x !=0 && y !=0);
    return 0;
}
