#include <stdio.h>
int main()
{
	int n1 = 0, n2 = 0;

	while (n1 < 24)
	{
		n2 = 0;
		while (n2 < 12)
		{
			printf("정답은? : %d, %d\n", n1, n2);
			n2++;
		}
		n1++;
	}
	return 0;
}