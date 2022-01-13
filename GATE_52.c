#include <stdio.h>
int f()
{
    static int x = 5;
    x = x - 1;
    return x;
}
void main()
{
    int x = 0;
    x = x + f();
    x = x + f();
    printf("%d", x);
}