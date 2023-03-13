#include <stdio.h>
#include <stdlib.h>

void takeInput(int arr[], int length)
{
    for (int i = 0; i < length; i++)
        scanf("%d", &arr[i]);
}

void display(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += arr[i];
    printf("%d", sum);
}

int main()
{
    typedef int *pointer;
    pointer array = (pointer)calloc(10, sizeof(int));

    takeInput(array, 10);
    display(array, 10);
}