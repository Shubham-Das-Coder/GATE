#include <stdio.h>
int main()
{
    int *p;
    int x = 10;
    p = &x;
    *p = x++ + *p;
    printf("%d", x);
}