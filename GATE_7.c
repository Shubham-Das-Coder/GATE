#include <stdio.h>
void main()
{
    char *P;
    char A[] = "gate_exam";
    P = A;
    printf("%u,%u", sizeof(A), sizeof(P));
}