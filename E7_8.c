#include <stdio.h>

#define N 5

int main(void)
{
    int i, j;
    int array[N], array_sort[N];
    int x; /* 配列 array の要素の中の最大値を一時格納するための変数 */
    int k; /* 配列 array の要素の中の最大値を格納している変数の添字を一時格納するための変数 */
           /* 例えば， array[3] に最大値 9 が格納されているとき x = 9，k = 3 */

    printf("array input: ");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < N; i++)
    {
        x = 0; /* 初期化 */
        k = 0; /* 初期化 */
        for (j = 0; j < N; j++)
        {
            /*↓↓↓ この部分を埋めよ ↓↓↓*/
            if (array[j] >= array[k])
            {
                k = j;
                x = array[k];
            }
            /* 配列 array の要素の中で最大の要素を求める．*/
        }
        /*↓↓↓ この部分を埋めよ ↓↓↓*/
        array_sort[i] = x;
        /*int 型配列 array_sort に格納する．*/
        array[k] *= (-1);
        /* 配列 array の要素の中で最大の要素を -1 倍する． */
    }

    printf("array_sort: ");

    for (i = 0; i < N; i++)
    {
        printf("%d ", array_sort[i]);
    }
    printf("\n");

    return 0;
}