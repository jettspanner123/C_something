#include <stdio.h>
#include <stdlib.h>

void get_input(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", arr[i]);
    }
}

int main()
{
    int base_number;
    printf("Enter array size: ");
    scanf("%d", &base_number);
    int array[base_number];

    get_input(array, base_number);
}