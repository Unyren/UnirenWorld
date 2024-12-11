#include <stdio.h>
int main()
{
	char 성[10] = "김";
	char 이름[10] = "기현";

	printf("%s %s\n", 성, 이름);
	printf("%s\n%s\n", 성, 이름);
	printf("%s ", 성);
	printf("%s", 이름);

	return 0;
}