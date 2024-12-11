#include <stdio.h>
int main()
{
	//초보
	int i = 0, j = 0;
	
	while (i < 5) {
		
		j = 0;
		while (i > j) {
			printf("ㅇ");

			j++;
		}
		printf("* \n");
		i++;
	}
	// 고수
	printf("* \n");
	printf("ㅇ* \n");
	printf("ㅇㅇ* \n");
	printf("ㅇㅇㅇ* \n");
	printf("ㅇㅇㅇㅇ* \n");
	return 0;
}

nested