#include <stdio.h>
#include "base.h"
int main()
{
	int sec, min, hour;

	printf("초를 입력하시오. : ");
	scanf_s("%d", &sec);

	if (sec < 60)
	{
		printf("0시 0분 %d초", sec);
	}
	else if (sec < 3600)
	{
		min = sec / 60;
		sec = sec % 60;
		printf("0시 %d분 %d초", min, sec);
	}
	else
	{
		hour = sec / 3600;
		sec = sec % 3600;
		if (sec >= 60)
		{
			min = sec / 60;
			sec = sec % 60;
			printf("%d시 %d분 %d초", hour, min, sec);
		}
		else if (sec < 60)
			printf("%d시 0분 %d초", hour, sec);
	}
	return 0;
}