#include <stdio.h>
int f(int k)
{
    if (k < 3)
        return k;
    else
        return f(k - 1) * f(k - 2) + f(k - 3);
}
int main()
{
    printf("%d", f(4));
}