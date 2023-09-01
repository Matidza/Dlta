#include <stdio.h>
int main(void)
{
    int var = 1;
    switch (var)
    {
        case 1:
            printf("Case 1 is matched.");
            break;
        case 2:
            printf("Case 2 matched.");
            break;
        case 3:
            printf("Case 3 is matched.");
            break;
        
        default:
            printf("Default case is Matched.");
            break;
    }
    return (0);
}