#include <stdio.h>
int main()
{
	char 기현 = 9;
	int 햄스틴 = 1052;
	double 시현 = 3.1415;
	printf("변수 기현의 크기: %d \n", sizeof(기현));
	printf("변수 햄스틴의 크기: %d \n", sizeof(햄스틴));
	printf("변수 시현의 크기: %d \n", sizeof(시현));

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
	return 0;
}