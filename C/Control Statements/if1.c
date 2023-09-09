#include <stdio.h>
int main(void)
{
    int x = 12;
    int y = 32;
    int z = 9;
    int square = x* x;
    printf("%i is a square of %i.\n", square, x);
    if (x < y) {
        printf("x is less than y, since x = %i.", x);
    }
    int d = y- x;
    printf("%i\n", d);
    return (0);
}