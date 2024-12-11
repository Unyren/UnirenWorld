#include <stdio.h>
#include "base.h"
int main()
{
    char* strarr[3] = { "김기현","햄스틴","김쭈니" };
    printf("%s \n", strarr[0]);
    printf("%s \n", strarr[1]);
    printf("%s \n", strarr[2]);

    love();
    return 0;
}