#include <stdio.h>
int main()
{
	double num;
	printf("인치를 쓰시오");
	scanf_s("%lf",&num);
	printf("%lf cm",num*2.54);
	return 0;
}