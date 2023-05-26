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
    double a[M][M], b[M][M];
    int i, j;

    a[0][0] = -1.0 / sqrt(2.0);
    a[0][1] = -1.0 / sqrt(3.0);
    a[0][2] = 1.0 / sqrt(6.0);
    a[1][0] = 1.0 / sqrt(2.0);
    a[1][1] = -1.0 / sqrt(3.0);
    a[1][2] = 1.0 / sqrt(6.0);
    a[2][0] = 0.0;
    a[2][1] = 1.0 / sqrt(3.0);
    a[2][2] = 2.0 / sqrt(6.0);

    // ここで行列 B を求めて表示する
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    // print_array 関数を呼び出して行列 B を表示する
    print_array(b);

    return 0;
}