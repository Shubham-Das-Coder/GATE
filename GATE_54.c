#include <stdio.h>
void fun(char *x)
{
    if (x[0] == '\0')
        return;
    fun(x + 1);
    printf("%c", x[0]);
}
int main()
{
    fun("GATE EXAM");
}