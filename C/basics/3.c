#include <stdio.h>
/**
 * maian: entry point
 * Description: this script adds the two values.
 * return: always return 0 
 **/
int main(void)
{
    int sum = 234;
    int num1, num2, ans;
    num1 = 10;
    num2 = 3;
    ans = num1 + num2;
    printf("The 'sum' variable is not = 10,  but is = to %i\n", sum);
    printf("the sum of num1 and num2 is %i", ans);
    return 0;
}