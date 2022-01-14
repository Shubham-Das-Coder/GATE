#include <stdio.h>
int print(int n)
{
    int i = 0;
    if (n > 1)
        return n + print(n - 1);
    return i;
}
void main()
{
    printf("%d", print(5));
}