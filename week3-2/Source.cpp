#include <stdio.h>

int main()
{
    int row, c = 1, n, i, j;
    printf("Input number of rows: ");
    scanf_s("%d", &row);
    for (i = 0; i < row; i++)
    {
        for (n = 1; n <= row - i; n++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;
            printf("% 4d", c);
        }
        printf("\n");
    }
    return 0;
}