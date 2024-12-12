#include <stdio.h>
void square(int* num);
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num = 0;
	while (num < 10)
	{
		square(&arr[num]);
		num++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d \n", arr[i]);
	}
	return 0;
}
void square(int* num) {
	if (*num % 2== 0)
	{
		*num=(*num)*(*num);
	}
}