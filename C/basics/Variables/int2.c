#include <stdio.h>
int main(void)
{
	int age, dob, now;
	age = 30;
	dob = 1997/11/15;
	now = 2023/9/10;
	char* name = "Zwivhuya";
	char* SE = "I am a software Engineer at JSE, ABSA and Take-a-lot.";
	printf("Hi, my name is %s, and i was born in %i on a saturday.\n", name, dob);
	printf("By that age of %i, I will be a successful SE, with 170M.\n", age);
	printf("%s, signed: %i.\n", SE, now);
	return 0;
}
