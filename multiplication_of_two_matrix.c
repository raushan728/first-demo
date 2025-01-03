#include <stdio.h>
int main()
{
    int rows, cols;
    printf("enter number of rows, columns of matrix ist");
    scanf("%d %d", &rows, &cols);
    printf("enter number of rows, columns of matrix 2nd");
    scanf("%d %d", &rows, &cols);
    if (rows != cols)
    {
        printf("matrix multiplication is not possible");
    }
    int matrix1[rows][cols], matrix2[rows][cols], multiplication[rows][cols], i, j, k;

    // input for matrix1
    printf("enter elements of matrix1\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("elements at position [%d],[%d]", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    // input for matrix2
    printf("enter elements of matrix2\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("elements at position [%d],[%d]", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // multiplication of matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            multiplication[i][j] = 0;
            for (int k = 0; k < cols; k++)
            {
                multiplication[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // output of multiplication matrix
    printf("multiplication of matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", multiplication[i][j]);
        }
        printf("\n");
    }
}
