#include <stdio.h>
int main(void)
{
    int x = 20; // locak vari
    static int y = 30; // static vari
    x = x + 10;
    y = y + 10;
    printf("\tLocal: %i\n\tStatic: %i\n", x , y);
    
}