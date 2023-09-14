#include <stdio.h>
int main(void)
{
    int i = 0;
    for (i = 1; i < 10; ++i)
    {
        printf("%i\n", i);
    }
    printf("\n");

    for (i = 1; i <= 10; ++i)
    {
        printf("%i\n", i);
    }
    return (0);
}