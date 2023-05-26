#include <stdio.h>

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
    double a[M][M], b[M][M], c[M][M];
    int i, j;

    a[0][0] = 2.5;
    a[0][1] = 0.0;
    a[0][2] = -1.0;
    a[1][0] = -1.0;
    a[1][1] = 1.5;
    a[1][2] = 0.0;
    a[2][0] = 5.0;
    a[2][1] = 4.0;
    a[2][2] = 3.0;

    b[0][0] = -2.0;
    b[0][1] = 4.5;
    b[0][2] = 1.0;
    b[1][0] = 4.0;
    b[1][1] = -3.0;
    b[1][2] = 2.5;
    b[2][0] = -2.5;
    b[2][1] = 0.0;
    b[2][2] = -2.0;

    // ここで行列の和を求める
    for (i = 0; i < M; i++)
    { // C=A+Bの計算
        for (j = 0; j < M; j++)
        {
            c[i][j] = 3 * a[i][j] + 2 * b[i][j];
        }
    }

    // ここで関数 print_array を呼び出して c を表示する
    print_array(c);

    return 0;
}