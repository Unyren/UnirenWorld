#include <stdio.h>
int main(void) {
    char ch[100];
    scanf_s("%s", ch, 100);

    //printf("%s \n", ch);
    //printf("%d \n", strlen(ch));

    int len = strlen(ch);

    for (int i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (ch[i] == ch[j]) continue;
        else {
            printf("회문X \n");
            return 0;
        }
    }

    printf("회문 \n");
}