#include <stdio.h>
void main()
{
    int *p = NULL;
    *p = 10;
    printf("\n%d", p);
    printf("\n%d", *p);
}