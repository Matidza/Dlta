#include <stdio.h>
int main(void)
{
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("%i\n", i);
    }
    printf("\n"); //add a new line
    for (i=0; i<4; i++)
    {
        printf("Multi loop\n");
    }
    printf("\n");
    for (i=0; i<3; i++)
    {
        printf("Blaa\n");
        printf("blee\n");
    }
    return (0);
}