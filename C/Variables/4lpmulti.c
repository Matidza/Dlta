#include <stdio.h>
int main(void)
{
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("Hello, world\n");
    }
    printf("\n"); //add a new line
    for (i=0; i<4; i++)
    {
        printf("Multi loop\n");
    }
    return (0);
}