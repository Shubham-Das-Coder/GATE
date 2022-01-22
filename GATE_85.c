#include <stdio.h>
int main()
{
    char c[] = "GateExam";
    char *p = c;
    printf("%c", *(p + p[3] - p[1]));
}