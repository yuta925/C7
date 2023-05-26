#include <stdio.h>

#define N 10
#define NUM_SCORE 50

int main(void)
{

    int i;
    int score[NUM_SCORE] = {
        1,
        4,
        9,
        9,
        8,
        10,
        10,
        9,
        5,
        10,
        2,
        9,
        6,
        4,
        0,
        7,
        3,
        5,
        6,
        6,
        7,
        4,
        2,
        9,
        2,
        5,
        5,
        3,
        1,
        9,
        5,
        7,
        3,
        2,
        7,
        9,
        1,
        7,
        6,
        6,
        5,
        8,
        2,
        5,
        3,
        10,
        6,
        2,
        2,
        5,
    };

    int freq[N + 1]; /* 点数 i の学生の人数を格納する配列 freq[i] */

    for (i = 0; i <= N; i++)
        freq[i] = 0;

    // ここで度数分布を求める
    for (i = 0; i < NUM_SCORE; i++)
    {
        freq[score[i]]++;
    }

    // 結果の表示
    printf("点数の分布は以下の通りです．\n");
    for (i = 0; i <= N; i++)
    {
        printf(" %2d点: %d\n ", i, freq[i]);
    }
    printf("\n");

    return 0;
}