#include <stdio.h>
#include <string.h>
void f(char *s, char *t)
{
    if (strlen(s) - strlen(t))
        printf("%d", strlen(s));
    else
        printf("%d", strlen(t));
}
void main()
{
    char *x = "HELLO";
    char *y = "COMPUTERS";
    f(x, y);
}