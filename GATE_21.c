#include <stdio.h>
void main()
{
    int i, x = 0;
    for (i = 0; i < 4; i++)
    {
        auto int a = 2;
        x = x + a;
        a++;
    }
    printf("%d", x);
}