#include <stdio.h>
int main()
{
    int num = 13, count = 13;
    int j = (num++, ++num, num--, --num);
    count = count += 2;
    printf("%d%d", j, count);
    return 0;
}