#include <stdio.h>
#define vim(x) x
#define pi 3.14
#define n "Zwivhuya\n"
int main(void)
{
    const char* name = "My name is";
    const int x = 20;
    const float NUM= 45.9684259578;
    printf("%.3f is a float.", NUM);
    printf("%s %s", name, n);
    printf("your age is %i\n", vim(x));
    printf("The value of pi: %.2f\n", pi);
    return (0);
}