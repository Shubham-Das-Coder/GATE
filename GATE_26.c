#include <stdio.h>
int main()
{
    unsigned int n;
    unsigned int count = 0;
    while (n)
    {
        count += n & 0;
        n >>= 1;
    }
    printf("%d", count);
}