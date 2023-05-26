#include <stdio.h>

#define M 3

int main(void)
{
    double a[M][M];
    int i, j;
    double sum;

    a[0][0] = 2.5;
    a[0][1] = 0.0;
    a[0][2] = -1.0;
    a[1][0] = -1.0;
    a[1][1] = 1.5;
    a[1][2] = 0.0;
    a[2][0] = 5.0;
    a[2][1] = 4.0;
    a[2][2] = 3.0;

    sum = 0.0;
    for (i = 0; i < M; i++)
        sum += a[1][i];

    printf("%f \n", sum);

    sum = 0.0;
    for (i = 0; i < M; i++)
        sum += a[i][2];

    printf("%f \n", sum);

    sum = 0.0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            sum += a[i][j];
        }
    }
    printf("%f \n", sum);

    return 0;
}
