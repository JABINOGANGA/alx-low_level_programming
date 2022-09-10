#include <stdio.h>
/**
 *  main - Inserts values
 *  Return: 0 (code is valid)
 */
int main(void)
{
        char c;
        int i;
        long int l;
        long long int ll;
        float n;

        printf("Size of a char: %lu byte(s)\n", sizeof(c));
        printf("Size of an int: %lu byte(s)\n", sizeof(i));
        printf("Size of a long int: %lu byte(s)\n", sizeof(l));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
        printf("Size of a float: %lu byte(s)\n", sizeof(n));
        return (0);
}
