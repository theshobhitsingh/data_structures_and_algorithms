#include <stdio.h>
int main()
{
    int row, col, i, j, a[10][10], count = 0;
    printf("Enter rows:");
    scanf("%d", &row);
    printf("Enter columns:");
    scanf("%d", &col);
    printf("Enter Element of Matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements are:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    /*checking sparse of matrix*/
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
                count++;
        }
    }
    if (count > ((row * col) / 2))
        printf("Matrix is a sparse matrix.\n");
    else
        printf("Matrix is not sparse matrix.\n");
}