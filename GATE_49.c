#include <stdio.h>
void main()
{
    static int x = 5;
    x = x - 1;
    printf("%d", x);
    if (x == 0)
        return;
    main();
}