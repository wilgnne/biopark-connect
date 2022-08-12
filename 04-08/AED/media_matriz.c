#define ROWS 3
#define COLS 2

float media(int matrix[ROWS][COLS]) {
    int acc = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            acc += matrix[i][j];
        }   
    }
    return (float)acc / ROWS * COLS;
}

void soma(int m[ROWS][COLS], int n[ROWS][COLS], int r[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            r[i][j] = m[i][j] + n[i][j];
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
