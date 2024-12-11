#include <stdio.h>
#include "base.h"
int main()
{
	char arr[240];
	int idx;
	scanf_s("%s", arr, (int)sizeof(arr));
	for (idx = 0; arr[idx] != '\0'; idx++);
	printf("%s 문자열의 길이 :%d \n", arr, idx);
	for (; idx != -1; idx--)
	{
		printf("%c", arr[idx]);
	}
	love();
	return 0;
}
