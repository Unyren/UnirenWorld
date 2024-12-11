#include <stdio.h>
int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = &arr;
	int* ptr2 = &arr;
	int i, j,k

	for (i = 0, j = 5; i < 3; i++, j--)
	{
		ptr1 = &arr[i];
		ptr2 = &#include <stdio.h>
int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = &arr;
	int* ptr2 = &arr;
	int i, j;

	int temp;

		for (i = 0, j = 5; i < 3; i++, j--)
		{
			ptr1 = &arr[i];
			ptr2 = &arr[j];
			//printf("%d %d \n", *ptr2, *ptr1);

			// 여기서부터, 아까 변수 a, b 값 교환한 알고리즘 적용!
			temp = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = temp;

		
		}
	for (i = 0; i < 6; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}arr[j];

//다음에 배울 swap 복습 한거











	// 아래 건드리지 않고 654321 출력해야 함.
	for (i = 0; i < 6; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}