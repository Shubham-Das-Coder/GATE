#include <stdio.h>
int main()
{
    int a = 5, *b, c;
    b = &a;
    printf("%d\n", a * *b * a + *b);
    return 0;
}