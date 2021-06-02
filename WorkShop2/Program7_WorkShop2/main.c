#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;
    printf("Enter two characters, after that I will help you print out all characters between them!\n");
    printf("Charater 1: ");
    scanf("%c", &ch1);
    printf("Charater 2: ");
    scanf("\n%c", &ch2);
    if(ch2 < ch1)
    {
        ch2 = ch1 + ch2;
        ch1 = ch2 - ch1;
        ch2 = ch2 - ch1;
    }
    for( ch1++; ch1 < ch2; ch1++)
    {
        printf("%c: %d, %o, %X\n", ch1, ch1, ch1, ch1);
    }
    return 0;
}
