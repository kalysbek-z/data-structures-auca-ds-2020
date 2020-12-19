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

struct VecInt
{
    /* data */
    int *p;
    size_t sz;
    size_t cp;
};

void VecInt_createEmpty(struct VecInt *v)
{
    v->p = NULL;
    v->sz = 0;
    v->cp = 0;
}

void VecInt_pushBack(struct VecInt *v, int x)
{
    if (v->sz == v->cp)
    {
        int newCp = v->sz == 0 ? 1 : v->cp * 2;
        int *q = (int *)malloc(sizeof(int) * newCp);
        for (int i = 0; i < v->sz; i++)
        {
            q[i] = v->p[i];
        }
        free(v->p);
        v->p = q;
        v->cp = newCp;
    }
    v->p[v->sz] = x;
    v->sz++;
}

int main(void)
{
    struct VecInt v;

    VecInt_createEmpty(&v);

    int x;

    while (scanf("%d", &x) == 1)
    {
        VecInt_pushBack(&v, x);
    }

    printArray(v.p, v.sz);

    reverse(v.p, v.p + v.sz);
    printArray(v.p, v.sz);

    free(v.p);
}