#include <stdio.h>
void main()
{
    static int x = 5;
    x = x - 1;
    if (x == 0)
        return;
    printf("%d", x);
    main();
}