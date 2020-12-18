#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int *p;

    x = 1;
    p = &x;

    printf("x = %d\n", x);
    printf("adress of x = %d\n", p);
    printf("using pointer x = %d\n", *p);

    *p = 2;
    printf("using pointer x = %d\n", *p);

    y = *p * *p;
    printf("y = %d\n", y);
}