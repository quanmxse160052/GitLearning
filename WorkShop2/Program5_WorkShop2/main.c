#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    char ch;
    int nVowels = 0, nConsonants = 0, nOthers = 0;
    printf("Enter a string of characters to check vowel and consonant: ");
    do{
            ch = getchar();
            ch = toupper(ch);
            if(ch >= 'A' && ch <= 'Z')

                switch(ch)
                {
                case 'U':
                case 'E':
                case 'O':
                case 'A':
                case 'I':
                    nVowels++;
                     break;
                default:
                    nConsonants++;
                }
            else if (ch != 10)
                nOthers++;

    }while(ch != '\n');

    printf("Vowels: %d\n", nVowels);
    printf("Consonants: %d\n", nConsonants);
    printf("Other: %d", nOthers);

    return 0;
}
