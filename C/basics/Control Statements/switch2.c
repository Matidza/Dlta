#include <stdio.h>
int main(void)
{
    int age = 3;
    switch (age)
    {
        case 1:
            printf("Case 1 is matched.");
            break;
        case 2:
            printf("Case 2 is matched.");
            break;
        case 3:
            printf("Case 3 is mathced.");
            break;
        default:
            printf("Default is mathced.");
            break;
    }
    return (0);
}