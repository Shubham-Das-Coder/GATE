#include <stdio.h>
int f(int n)
{
    static int i = 0;
    if (n > 3)
        return n;
    n = n + i;
    i++;
    return f(n);
}
int main()
{
    printf("%d", f(1));
}