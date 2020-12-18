#include <stdio.h>
#define N 5

int main(void)
{
    // int n;
    // scanf("%d", n);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");

    for (int *p = arr; p != arr + N; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    printf("sum of all elements: %d\n", sum);

    int sump = 0;

    for (int *p = arr; p != &arr[N]; p++)
    {
        sump += *p;
    }

    printf("sum of all elements using *p: %d\n", sump);
}