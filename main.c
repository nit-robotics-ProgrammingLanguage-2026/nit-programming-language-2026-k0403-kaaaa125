#include <stdio.h>

int main(void)
{
    int num;
    int result;

    scanf("%d", &num);

    result = (int)(num * 1.08);

    printf("%d\n", result);

    return 0;
}