#include <stdio.h>
#include <math.h>

#define M 3

int main(void)
{
    double a[M][M];
    int i, j;
    double trace = 0, frobenius_norm = 0;

    a[0][0] = 2.5;
    a[0][1] = 0.0;
    a[0][2] = -1.0;
    a[1][0] = -1.0;
    a[1][1] = 1.5;
    a[1][2] = 0.0;
    a[2][0] = 5.0;
    a[2][1] = 4.0;
    a[2][2] = 3.0;

    /* ここで行列のトレースを求める */
    for (i = 0; i < M; i++)
    {
        trace += a[i][i];
    }

    /* ここで行列のフロベニウスノルムを求める */
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            frobenius_norm += a[i][j] * a[i][j];
        }
    }

    /* トレースとフロベニウスノルムを表示する */
    printf("トレース: %f\nフロベニウスノルム: %f\n", trace, sqrt(frobenius_norm));

    return 0;
}