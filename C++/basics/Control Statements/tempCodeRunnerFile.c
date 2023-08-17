#include <stdio.h>
int main(void)
{
    int age1 = 17;
    int age2 = 35;
    if (age1 < 18) {
        printf("You are %i and less than 18.\n", age1);
        printf("You are not eligable to vote.\nWait till your 18 ti vote.");
    }
    else {
        printf("You are over 18 yrs old.\n");
        printf("You are eligable to vote.\n");
        prinf("Go register to vote.\n");
    }
    if (age2 < 18) {
        printf("You are less than 18.\n");
        printf("You are not eligable to vote.\n");
        printf("Wait till your 18 ti vote.");
    }