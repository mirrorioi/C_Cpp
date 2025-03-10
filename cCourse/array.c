#include <stdio.h>

int main(void)
{

    int a = 1;
    int vr[a];
    vr[0] = 1;
    printf("%d\n", vr[0]);

    int vc[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vc[i]);
    }

    // 多维数组
    int i, j;
    int ma[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mb[2][3] = {{6, 3, 4}, {5, 1, 2}};
    int mc[2][3] = {0};



    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mc[i][j] = ma[i][j] + mb[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%-3d", mc[i][j]);
        }
        putchar('\n');
    }
}