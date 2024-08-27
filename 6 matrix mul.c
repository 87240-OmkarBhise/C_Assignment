#include <stdio.h>

void inputMatrix(int [][10], int, int);
void multiplyMatrices(int [][10], int [][10], int [][10], int, int, int, int);
void printMatrix(int [][10], int, int);


int main() {

    int rowA, colA, rowB, colB;

    printf("Enter the number of rows and columns for the matrix A: ");
    scanf("%d %d", &rowA, &colA);

    printf("Enter the number of rows and columns for the matrix B: ");
    scanf("%d %d", &rowB, &colB);

    int matA[10][10], matB[10][10], res[10][10];

    printf("Input matrix A:\n");
    inputMatrix(matA, rowA, colA);

    printf("Input matrix B:\n");
    inputMatrix(matB, rowB, colB);


    multiplyMatrices(matA, matB, res, rowA, colA, rowB, colB);

    printf("Result matrix C:\n");
    printMatrix(res, rowA, colB);

    return 0;
}


void inputMatrix(int matrix[][10], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int matA[][10], int matB[][10], int res[][10], int rowA, int colA, int rowB, int colB) {
    if (colA != rowB) {
        printf("Matrix multiplication is not possible!\n");
        return;
    }

    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            for (int k = 0; k < colA; k++) {
                res[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols) {
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}