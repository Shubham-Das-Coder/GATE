#include <stdio.h>
int ABC(int x)
{
    if (x > 9)
        return x - 2;
    printf("%d", ABC(ABC(x + 10)));
}
int main()
{
    ABC(3);
}