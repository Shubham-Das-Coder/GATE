#include <stdio.h>
void main()
{
    int x = 5;
    x = x - 1;
    if (x == 0)
        return;
    main();
    printf("%d", x);
}