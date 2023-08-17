#include <stdio.h>
#define increment(x) x 
/**
 * main - entry point
 * return: always 0 (success)
*/
int main(void)
{
    char* ptr = "How you doing";
    int x = 10;
    printf("%s ", increment(ptr));
    printf("%d ", increment(x));
    return (0);
}