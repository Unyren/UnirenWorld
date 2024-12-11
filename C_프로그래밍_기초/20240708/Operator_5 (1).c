#include <stdio.h>
int main()
{
	int num1 = 10;
	int num2 = (num1--) + 2;

	printf("num1: %d \n", num1);
	//9
	printf("num2: %d \n", num2);
	//12
	return 0;
}