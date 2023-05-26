#include <stdio.h>

#define N 20

int main(void)
{
    int m;
    scanf("%d", &m);
    int a[N];
    a[0] = m;
    for (int j = 1; j < N; j++)
    {
        a[j] = 2 * a[j - 1] + 1;
    }

    for (int j = 0; j < N; j++)
    {
        printf("a_%d = %d\n", j, a[j]);
    }

    return 0;
}