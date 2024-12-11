#include <stdio.h>
#include "base.h"
void to_binary(int n)
{
	if (n == 0 || n == 1)
		printf("%d ", n);

	else {
		to_binary(n / 2);
		printf("%d ", n % 2);
	}
}

int main(void)
{
	int n;
	scanf_s("%d", &n);

	to_binary(n);
    love();
    return 0;
}