#include <stdio.h>
int main()
{
    int A[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int *p = &A[0][0];
    p++;
    *p++;
    ++*p;
    printf("%d", *p + 1);
}