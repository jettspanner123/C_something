#include <stdio.h>
#include <stdlib.h>
int digit(int num)
{
    int len = 0;
    while (num > 0)
    {
        num /= 10;
        len++;
    }
    return len;
}

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int last_digti = base_number % 10;
    int temp = base_number;
    for (int i = 1; i < digit(base_number); i++)
    {
        temp /= 10;
    }
    printf("First digit: %d and last digit: %d\n", temp, last_digti);

    printf("Sum of first and last digit of the number is: %d\n", last_digti + temp);
}