#include <stdio.h>

int main()
{
    int base_number;
    scanf("%d", &base_number);

    int temp = base_number;
    int isBinary = 0;
    while (base_number > 0)
    {
        if (base_number % 10 <= 1)
            isBinary++;
        else
            isBinary = 0;
    }
    printf("%d", isBinary);
}