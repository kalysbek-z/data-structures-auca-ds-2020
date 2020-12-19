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
    int *p = NULL;
    int sz = 0;
    int cp = 0;

    int x;

    while (scanf("%d", &x) == 1)
    {
        if (p == NULL)
        {
            p = (int *)malloc(sizeof(int) * (sz + 1));
        }
        else
        {
            int newCp = sz == 0 ? 1 : cp * 2;
            int *q = (int *)malloc(sizeof(int) * newCp);
            for (int i = 0; i < sz; i++)
            {
                q[i] = p[i];
            }
            free(p);
            p = q;
            cp = newCp;
        }
        p[sz] = x;
        sz++;
    }

    printArray(p, sz);

    reverse(p, p + sz);
    printArray(p, sz);

    free(p);
}