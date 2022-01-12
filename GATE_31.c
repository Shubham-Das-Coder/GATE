#include <stdio.h>
void A(int *a, int *b)
{
    b = a;
    *a += 2;
    printf("%d%d", *a, *b);
}
void main()
{
    int i = 10, j = 11;
    int *a, *b;
    A(&i, &j);
}