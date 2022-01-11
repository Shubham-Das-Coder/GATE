#include <stdio.h>
void convert(int n)
{
    if (n < 0)
        printf("%d", n);
    else
    {
        convert(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    int n = 4;
    convert(n);
}