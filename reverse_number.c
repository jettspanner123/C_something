#include <stdio.h>
#include <stdlib.h>

int main(int leng, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);
    int temp = base_number;
    int reverse = 0;
    while (base_number > 0)
    {
        reverse = (reverse * 10) + base_number % 10;
        base_number /= 10;
    }
    printf("The reverse of %d is %d\n", temp, reverse);
}