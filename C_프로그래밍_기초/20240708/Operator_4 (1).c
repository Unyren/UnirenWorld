#include <stdio.h>
int main()
{
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	//12
	printf("num1: %d \n", num1++); /*후위 증가*/
	//12
	printf("num1: %d \n", num1);
	//13

	printf("num2: %d \n", num2);
	//12
	printf("num2: %d \n", ++num2); /*전위 증가*/
	//13
	printf("num2: %d \n", num2);
	//13
	return 0;
}