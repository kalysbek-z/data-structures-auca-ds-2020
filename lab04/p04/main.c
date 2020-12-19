#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5

void printArray(int *p, int n)
{
    for (int *q = p + n; p < q; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
}

void reverse(int *beg, int *end)
{
    for (;;)
    {
        if (beg == end)
        {
            break;
        }

        --end;

        if (beg == end)
        {
            break;
        }

        int t = *beg;
        *beg = *end;
        *end = t;
        beg++;
    }
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    int *a = (int *)malloc(sizeof(int) * n);
    if (a == NULL)
    {
        printf("not enough dynamic memory");
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printArray(a, n);

    reverse(a, a + n);
    printArray(a, n);

    free(a);
}