#include <stdio.h>

#define N 6

/* プロトタイプ宣言，配列の引数の書き方に注意 */
void array_input(int a[]);
void array_print(int a[], int b[]);
int array_sum(int a[], int b[]);

int main(void)
{
    int value[N] = {1, 5, 10, 50, 100, 500};
    int num[N];
    int sum;

    printf("枚数の入力\n ");
    array_input(num);

    printf(" 硬貨の額面，枚数\n ");
    array_print(value, num);

    sum = array_sum(value, num);
    printf(" 硬貨の合計金額は %d 円です\n ", sum);

    return 0;
}

void array_input(int a[]) /* 入力を行う関数の本体 */
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf(" %d 番目 > ", i + 1);
        scanf("%d", &a[i]);
    }
}

void array_print(int a[], int b[]) /* 表示を行う関数の本体 */
{
    int j;
    for (j = 0; j < N; j++)
    {
        printf("%d円が%d枚\n", a[j], b[j]);
    }
}

int array_sum(int a[], int b[]) /* 合計を求める関数の本体 */
{
    int k, sum = 0;
    for (k = 0; k < N; k++)
    {
        sum += (a[k] * b[k]);
    }
    return sum;
}