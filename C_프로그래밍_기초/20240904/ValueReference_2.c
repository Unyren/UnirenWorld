#include <stdio.h>
#include "base.h"
void swap(int* ptr1, int* ptr2, int* ptr3)
{
    int temp = *ptr3;
    *ptr3 = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
}
int main ()
{
    int num1 = 10, num2 = 20, num3 = 30;
    swap(&num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    love();
    return 0;
}