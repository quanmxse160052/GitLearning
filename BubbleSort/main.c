#include <stdio.h>
#include <stdlib.h>
void inputElement(int *arr, int n);
void printElementAfterSort(int *ar, int n);
void swapping(int *a, int *b);
void sorting(int *a, int n);
int main()
{
    int element = 0;
    printf("Enter the number of elements to sort: ");
    scanf("%d", &element);
    int *arr = calloc(element, sizeof(int));
    inputElement(arr, element);
    sorting(arr, element);
    printElementAfterSort(arr, element);

    return 0;
}
void sorting(int *a, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = n - 1; j > i; j--)
        {
            if(a[j] < a[j - 1])
                swapping(&a[j], &a[j - 1]);
        }
    }
}
void inputElement(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printElementAfterSort(int *ar, int n)
{
    printf("After sorting: ");
    int i = 0;
    while( i < n)
    {
        printf("%d\t", ar[i]);
        i++;
    }
}
void swapping(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
