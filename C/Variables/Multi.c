#include <stdio.h>
int main(void)
{
    int age1, age2;
    float num1, num2;
    const char* name1;
    age1 = 25;
    age2 = 20;
    num1 = 1.207578;
    num2 = 1.7585567;
    name1 = "Zwivhuya";
    const char* name = "Nomvula";
    printf("%s is %i years old, but is %fm tall.\n", name1, age1, num1);
    printf("%s is %i years old, but is %fm tall.\n", name, age2, num2);
    printf("This is the first line.\nThis is a second line\n.");
    return 0;
}
