#include "c_hyun.h"
#include <stdio.h>
int main()
{
	int num;
	printf("자연수를 입력해. : ");
	scanf_s("%d", & num);

	if (num == 1)
		goto one;
	else if (num == 2)
		goto two;
	else
		goto other;

one:
	printf("1을 입력했어. \n");
	goto end;
		two:
	printf("2를 입력했어. \n");
	goto end;
other:
	printf("3 혹은 다른 값을 입력했냐? 바보. \n");

end:
	return 0;
}