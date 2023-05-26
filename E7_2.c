#include <stdio.h>

int main(void)
{
    int n, i = 0, j = 0, sum = 0;
    scanf("%d", &n);
    int a[50];

    while (i * i <= n)
    {
        a[i] = i * i;
        i++;

        if (((i - 1) * (i - 1) <= n) && (i * i > n))
        {
            for (int k = i; k < 50; k++)
            {
                a[k] = -1;
            }
            break;
        }
    }

    while (j < 50)
    {
        printf("a[%d] = %d\n", j, a[j]);
        j++;
        if (a[j] == -1)
        {
            for (int k = 0; k < j; k++)
            {
                sum += a[k];
            }
            break;
        }
    }

    printf("二乗の和は%d\n", sum);

    return 0;
}