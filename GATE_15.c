#include <stdio.h>
int x;
void Q(int z)
{
    z += x;
    printf("%d", z);
}
void P(int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    printf("%d", x);
}
void main()
{
    x = 5;
    P(&x);
    printf("%d", x);
    getchar();
}