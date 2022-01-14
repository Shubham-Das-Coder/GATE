#include <stdio.h>
int find(int a)
{
    if (a <= 2)
        return 1;
    if (a % 2 == 0)
        return find(a / 2);
    return find(a / 2) + find(a / 2 - 1);
}
void main()
{
    printf("%d", find(7));
}