#include <stdio.h>
#include "base.h"
void odd(int arr[])
{
    int i;
    int result;
    for (int i = 0; i < 10; i++)
    {
        result=arr[i] % 2;
        if (result != 0)
        {
            printf("홀수: %d \n",arr[i]);
        }
    }
}
void even(int arr[])
{
    int i;
    int result;
    for (int i = 0; i < 10; i++)
    {
        result = arr[i] % 2;
        if (result == 0)
        {
            printf("짝수: %d \n", arr[i]);
        }
    }
}

int main ()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    odd(arr);
    even(arr);
    love();
    return 0;
}