#include <math.h>
#include <stdio.h>
#include <float.h>

#define MAX_SEAT 10 // 空席の数

int main(void)
{
    int seat_no[MAX_SEAT] = {1, 5, 8, 10, 15, 16, 20, 22, 25, 30}; // 空席の番号
    double point[MAX_SEAT][2] =
        {
            {1.1, 5.2},
            {3.4, 1.6},
            {4.5, 3.4},
            {2.3, 2.6},
            {6.4, 5.7},
            {7.6, 7.8},
            {5.2, 4.4},
            {1.7, 3.5},
            {3.8, 6.3},
            {5.8, 6.3}};          // 空席の座標   point[ n ][ 0 ] = x座標
                                  //              point[ n ][ 1 ] = y座標
    double x_dis, y_dis;          // x, y方向の座標
    double dis;                   // 2つの空席の距離
    double min_dis = DBL_MAX;     // 最も離れた2つの座席の距離
    int min_dis_seat[2] = {0, 0}; // 最も離れた2つの座席の番号
    int i, j;

    for (i = 0; i < MAX_SEAT - 1; i++)
    {
        for (j = i + 1; j < MAX_SEAT; j++)
        {
            x_dis = point[i][0] - point[j][0];
            y_dis = point[i][1] - point[j][1];
            // 距離の計算
            dis = sqrt(x_dis * x_dis + y_dis * y_dis);
            if (min_dis > dis)
            {
                min_dis = dis;
                min_dis_seat[0] = seat_no[i];
                min_dis_seat[1] = seat_no[j];
            }
        }
    }

    printf("最も小さい座標は %d と %d です (距離 %8.6f)\n", min_dis_seat[0], min_dis_seat[1], min_dis);

    return 0;
}