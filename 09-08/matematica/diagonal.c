#include "stdio.h"

int traco_matrix(int mtx[][3], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sum += mtx[i][j];
        }
        
    }
    return sum;
}

int traco_secundario(int mtx[][3], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) == (m - 1))
                sum += mtx[i][j];
        }
        
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int mtx[3][3] = {
        {1, 2, 3},
        {1, 1, 1},
        {0, 0, 1}
    };

    int traco = traco_matrix(mtx, 3, 3);
    int sec = traco_secundario(mtx, 3, 3);

    printf("O traco da matrix e %d\n", traco);
    printf("O traco secundario e %d\n", sec);

    return 0;
}
