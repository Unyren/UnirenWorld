#include <stdio.h>
int main(void) {
    int arr[5] = { 1,2,3,4,5 };
    int* ptr;
    int sum = 0;

    for (int i = 4; i >= 0; i--) {
        ptr = &arr[i];
        (*ptr)--; /*포인터가 arr[4]를 지정함 i는 4부터 시작해야한다.포인터가 arr[i] 어디를 가르키는지 포문이 완전히 달라진다... 괜히 쌤처럼 하지말자.
        더 복잡해짐;;*/
    }

    for (int i = 0; i < 5; i++) {
        ptr = &arr[i];
        printf("arr[%d] => %d \n", i, *ptr);
        sum += *ptr;
    }

    printf("sum의 결과 => %d \n", sum);
}