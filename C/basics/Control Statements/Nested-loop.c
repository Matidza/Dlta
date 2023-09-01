#include <stdio.h>
int main(void)
{
    int i,j;
    for (i = 1; i <= 2; ++i)// Outer loop
    {
        printf("Outer loop: %i\n", i);

        // inner loop
        for (j = 1; j <= 4; ++j)
        {
            printf("inner loop: %i\n", j);
        }
    }
    return (0);
}