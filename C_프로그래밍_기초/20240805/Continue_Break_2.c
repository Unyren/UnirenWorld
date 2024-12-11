#include "c_hyun.h"
#include <stdio.h>
int main()
{
	int a, z;
	int result;

	for (a = 0; a < 10; a++)
		for (z = 0; z < 10; z++)
		{
			result = (a * 10 + a) + (z * 10 + z);
				if (result == 99)
					printf("a = %d,z = %d\n", a, z);
		}
	return 0;
}