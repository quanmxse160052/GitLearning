#include <stdio.h>
#include <stdlib.h>
void selectionSort(int *a, int n);
void inputElement(int *arr, int n);
void printElementAfterSort(int *ar, int n);
void swapping(int *a, int *b);
int main()
{
    int element = 0;
    printf("Enter the number of elements you want to sort:");
    scanf("%d", &element);
    int *arr;
    arr = calloc(element, sizeof(int));
    inputElement(arr, element);
    selectionSort(arr, element);
    printElementAfterSort(arr, element);
    return 0;
}
void inputElement(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void selectionSort(int *a, int n)
{
    for(int i = 0, temp = 0; i < n - 1; i++)
    {
        int smallest = a[i];
        temp = i;
        for(int j = i + 1; j < n ; j++)
        {
            if(a[j] < smallest)
            {
                temp = j;
                smallest = a[j];
            }

        }
        if(i != temp)
            swapping(&a[i],&a[temp]);

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
