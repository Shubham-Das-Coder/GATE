#include <stdio.h>
void main()
{
    unsigned int x[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("%u,%u,%u,%u", x, x + 1, *(*(x + 1)), *(*(x + 2) + 2));
}