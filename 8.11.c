#include <stdio.h>

#define PERSON 3
#define SUBJECT 5
int data[PERSON][SUBJECT] = {
    {80, 70, 40, 60, 80}, // sam_p[0]
    {50, 90, 60, 40, 30}, //  sam_p[1]
    {70, 40, 70, 60, 50}, // sam_p[2]
};                        //    sum_s[0] [1] [2] [3] [4]

void calc_sum(int data[PERSON][SUBJECT], int sum_p[], int sum_s[])
{
    for (int p = 0; p < PERSON; p++)
    {
        sum_p[p] = 0;
    } // 初期化(人)
    for (int s = 0; s < SUBJECT; s++)
    {
        sum_s[s] = 0;
    } // 初期化(科目)
    for (int p = 0; p < PERSON; p++)
    {
        for (int s = 0; s < SUBJECT; s++)
        {
            sum_p[p] += data[p][s]; // 加算(人)
            sum_s[s] += data[p][s]; // 加算(科目)
        }
    }
}

int main(void)
{
    int sum_p[PERSON], sum_s[SUBJECT];
    calc_sum(data, sum_p, sum_s); // 合計を計算する
    for (int p = 0; p < PERSON; p++)
    {
        for (int s = 0; s < SUBJECT; s++)
        {
            printf(" %2d ", data[p][s]); // データを表示
        }
        printf("| %d\n", sum_p[p]); // 合計表示(人)
    }
    for (int s = 0; s < SUBJECT; s++)
    {
        printf("%d ", sum_s[s]); // 合計表示(科目)
    }
    printf("\n");
}