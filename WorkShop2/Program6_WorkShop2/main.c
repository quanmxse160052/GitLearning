#include <stdio.h>
#include <stdlib.h>
int main()
{

    for(int x = 0; x <= 255; x++)
    {
        printf("%c: %d, %o, %X\n", x, x, x, x);
        if(x != 0 && x % 20 == 0) getchar();
    }

    return 0;
}
