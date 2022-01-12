#include <stdio.h>
void main()
{
    int x = 10, *y = &x;
    ++*y;
    *y += 2;
    printf("%d", *y);
}