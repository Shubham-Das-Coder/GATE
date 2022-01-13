#include <stdio.h>
int f(int x)
{
    if (x <= 1)
        return 1;
    else
        printf("%d", f(x - 1) + f(x - 2));
}
void main()
{
    f(3);
}