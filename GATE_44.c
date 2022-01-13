#include <stdio.h>
int main()
{
    int *a;
    char *b;
    float *c;
    printf("%d", sizeof(*a));
    printf("%d", sizeof(*b));
    printf("%d", sizeof(*c));
}