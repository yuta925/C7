
#include <stdio.h>
#include <math.h>

#define M 3

void print_array(double a[M][M])
{
    int i, j;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%5.1f  ", a[i][j]);
            // a[i][j] を表示, 書式は %5.1f とする
            // 1個の数字を表示するごとにスペースを入れておくこと
        }
        printf("\n");
        // 改行
    }
}

int main(void)
{
    double a[M][M], b[M][M], c[M][M], d[M][M];
    int i, j, k;

    a[0][0] = -1.0 / sqrt(2.0);
    a[0][1] = -1.0 / sqrt(3.0);
    a[0][2] = 1.0 / sqrt(6.0);
    a[1][0] = 1.0 / sqrt(2.0);
    a[1][1] = -1.0 / sqrt(3.0);
    a[1][2] = 1.0 / sqrt(6.0);
    a[2][0] = 0.0;
    a[2][1] = 1.0 / sqrt(3.0);
    a[2][2] = 2.0 / sqrt(6.0);

    b[0][0] = -1.0 / sqrt(2.0);
    b[0][1] = 1.0 / sqrt(2.0);
    b[0][2] = 0.0;
    b[1][0] = -1.0 / sqrt(3.0);
    b[1][1] = -1.0 / sqrt(3.0);
    b[1][2] = 1.0 / sqrt(3.0);
    b[2][0] = 1.0 / sqrt(6.0);
    b[2][1] = 1.0 / sqrt(6.0);
    b[2][2] = 2.0 / sqrt(6.0);

    // ここで行列の積 C = A B を求める
    printf("C = A･B\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < M; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    print_array(c);

    // ここで行列の積 D = B A を求める
    printf("D = B･A\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            d[i][j] = 0;
            for (k = 0; k < M; k++)
            {
                d[i][j] += b[i][k] * a[k][j];
            }
        }
    }

    print_array(d);

    return 0;
}