#include <stdio.h>
#include "base.h"
int func1(int num)
{
    return num * num;

}

void func2(int* ptr)
{
    int num = *ptr;
    *ptr = num * num;
}
int main ()
{
    int num;
    scanf_s("%d", &num);
    int reslut=func1(num);
    printf("%d", reslut);
    love();
    return 0;
}