#include <stdio.h>
int main()   
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;

	for (i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++; //아스타 표시 잘 볼것.
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}