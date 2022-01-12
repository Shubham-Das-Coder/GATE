#include <stdio.h>
int main()
{
    static int a;
    static char j = 'c';
    printf("%c%d", ++j, ++a);
    return 0;
}