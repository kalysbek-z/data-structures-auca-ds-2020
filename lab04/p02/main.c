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

    for (int *p = &arr[0]; p != arr + N; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
}