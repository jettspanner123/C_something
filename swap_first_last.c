#include <stdio.h>
#include <stdlib.h>

int digit(int num)
{
    int len = 0;
    while (num > 0)
    {
        len++;
        num /= 10;
    }
    return len;
}

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int leng = digit(base_number);
    int arr[leng];
    int j = leng - 1;
    for (int i = 0; i < leng; i++)
    {
        arr[j] = base_number % 10;
        base_number /= 10;
        j--;
    }
    int temp = arr[0];
    arr[0] = arr[leng - 1];
    arr[leng - 1] = temp;
    printf("After switching first and last digit places: ");
    for (int i = 0; i < leng; i++)
        printf("%d", arr[i]);
}