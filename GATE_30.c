#include <stdio.h>
void A(int *a, int *b)
{
    b = a;
    *a += 2;
}
void main()
{
    int i = 10, j = 11;
    A(&i, &j);
    printf("%d%d", i, j);
}