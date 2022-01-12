#include <stdio.h>
void ABC(int *a)
{
    a = a + 3;
}
void main()
{
    int a[5] = {10, 20, 30, 40, 50};
    ABC(a);
    printf("%d", a[3]);
}