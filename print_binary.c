#include "main.h"

/**
 * _print_binary - print a binary number
 * @n: parameter is unsigned integer
 * Return: length.
 */
int _print_binary(unsigned int n)
{
    unsigned int m, i;
    unsigned int arr[32];
    int ln = 0;
    m = 2147483648;
    arr[0] = n / m;

    for (i = 1; i < 32; i++)
    {
        m /= 2;
        arr[i] = (n / m) % 2;
    }
    for (i = 0; i < 31; i++)
        if (arr[i])
            break;
    for (; i < 32; i++)
    {
        char z = '0' + arr[i];
        write(1, &z, 1);
        ln++;
    }
    return (ln);
}