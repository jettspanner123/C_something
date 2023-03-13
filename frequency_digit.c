#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_Number = atoi(number);
    printf("Enter number to find the frequency of: ");
    int nm;
    scanf("%d", &nm);

    int freq = 0;
    while (base_Number > 0)
    {
        if (base_Number % 10 == nm)
            freq++;
        base_Number /= 10;
    }
    printf("Frequency of the number %d is: %d", nm, freq);
}