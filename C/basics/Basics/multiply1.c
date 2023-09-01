// we can do this.
#include <stdio.h>
#define multiply(a, b) (a) * (b)
int main(void)
{
    printf("%i is the real answer.", multiply(2 + 3, 3 + 5));
    return (0);
}