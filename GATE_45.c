#include <stdio.h>
void main()
{
    int *p; // Wild pointer as it is unitialized
    *p = 10;
    printf("\n%d", p);
    printf("\n%d", *p);
}