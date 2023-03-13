#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);
    int a = 0, b = 1, c;
    printf("Even fibonacci numbers are: ");
    for (int i = 1; i <= base_number; i++)
    {
        c = a + b;
        a = b;
        b = c;
        a % 2 == 0 ? printf("%d ", a) : NULL;
    }
}