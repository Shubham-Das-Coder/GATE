#include <stdio.h>
int main()
{
    int *p;
    int x = 10;
    char *q = "abc";
    p = &x;
    *p = *q++ + x;
    printf("%d", x);
}