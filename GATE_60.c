#include <stdio.h>
int f(int x)
{
    return x == 0 ? 1 : x % 10 + f(x / 10);
}
void main()
{
    printf("%d", f(23) - f(11));
}