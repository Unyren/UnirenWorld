#include <stdio.h>
#include "base.h"

int main()
{
	int arr1[3][4];
	int arr2[7][9];
	printf("세로3, 가로4: %d \n", sizeof(arr1));
	printf("세로7, 가로9: %d \n", sizeof(arr2));
	love();
	return 0;
}