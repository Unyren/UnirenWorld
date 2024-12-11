#include <stdio.h>
#include "base.h"
int main()
{
	char arr[] = {'G','o','o','d',' ','t','i','m','e'}; //문자는 ''가 들어가야 한다.
	int arrlen = sizeof(arr) / sizeof(char); //sizeof()
	for (int i = 0; i<arrlen; i++)
		printf("%c", arr[i]);
	love();
	return 0;
}