#include <stdio.h>

#define STUDENT 5
#define EXAM 4

void sum_calc(int a[][EXAM], int student[], int exam[])
{
    for (int i = 0; i < EXAM; i++) // 初期化(回数)
    {
        exam[i] = 0;
    }

    for (int j = 0; j < STUDENT; j++) // 初期化(生徒)
    {
        student[j] = 0;
    }

    for (int i = 0; i < STUDENT; i++)
    {
        for (int j = 0; j < EXAM; j++)
        {
            student[i] += a[i][j];
            exam[j] += a[i][j];
        }
    }
}

int main(void)
{
    int i, j;
    int student[STUDENT], exam[EXAM];
    double mean = 0, average = 0;

    // 使用しない変数は消去すること

    int a[STUDENT][EXAM] =
        {
            {70, 85, 70, 100},
            {60, 30, 40, 50},
            {50, 60, 70, 45},
            {80, 100, 90, 85},
            {75, 90, 55, 80},
        };

    sum_calc(a, student, exam);

    for (i = 0; i < STUDENT; i++)
    {
        mean = student[i] / (double)EXAM;
        printf("学生%dの平均点は%2.2f\n", i, mean);
    }

    for (j = 0; j < EXAM; j++)
    {
        average = exam[j] / (double)STUDENT;
        printf("%d回目のの試験の平均点は%2.2f\n", j, average);
    }

    return 0;
}
