#include <stdio.h>

int main(void)
{

    int i = 0;;
    printf("+");
    for (i = 0; i < 23; i++)
    {
        printf("-");
    }
    printf("+");
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("| o | X | o | X | o | X |\n");
        printf("| X | o | X | o | X | o |\n");
    }
       
    printf("+");
    for (i = 0; i < 23; i++)
    {
        printf("-");
    }
    printf("+");
    printf("\n");
    return(0);
}
