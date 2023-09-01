#include <stdio.h>
#define con(a, b) a##b
int main(void)
{
    printf("%i is a concatenation value.", con(12, 34));
    return (0);
}