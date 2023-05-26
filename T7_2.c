#include <stdio.h>

#define N 10

int main(void)
{
    int freq[N];

    for (int i = 0; i < N; i++)
    {
        freq[i] = 0;
        ;
    }

    for (int j = 0; j < N; j++)
    {
        int a;
        printf("%d回目: ", j);
        scanf("%d", &a);
        freq[a]++;
    }

    for (int k = 0; k < N; k++)
    {
        printf("%dは%d個\n", k, freq[k]);
    }

    return 0;
}