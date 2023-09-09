#include <stdio.h>
/**
 * main: entry point.
 * Description: program that displays texts.
 * return: always return (0).
 **/
 int main(void)
{
     // exercise 2
     printf("In C, lowercase letters are significant.\n");
     printf("main is where program execution begins.\n");
     printf("Openning and closing braes enclose program statement in a routine.\n");
     printf("Allprogram statement must be terminated by a semicolon.\n");
     printf("\n");
     // exercise 3
     printf("Testing...");
     printf("....1");
     printf("...2");
     printf("..3");
     printf("\n");
     printf("\n");
     //exxercise 4: Subtract
     int num1, num2, ans;
     num1 = 87;
     num2 = 15;
     ans = num1 - num2;
     printf("the answer to ans is %i", ans);
     return 0;
}