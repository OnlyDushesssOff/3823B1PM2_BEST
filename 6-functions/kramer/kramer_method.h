#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double del_matrix(int* mat, int size) {
    if (size == 4)
        return mat[0] * mat[3] - mat[1] * mat[2];
    if (size == 9)
        return mat[0] * mat[4] * mat[8] + mat[6] * mat[1] * mat[5] + mat[3] * mat[7] * mat[2] - mat[6] * mat[4] * mat[2] - mat[0] * mat[7] * mat[5] - mat[3] * mat[1] * mat[8];
}

double kramer_method(int* matrix, int* vector, int size) {
    int sum = 0;
    int size_MxN = size * size;

    int* x = (int*)malloc(size_MxN * sizeof(int));
    for (int i = 0; i < size_MxN; i++) {
        x[i] = matrix[i];
    }

    int* matrix1 = (int*)malloc(size_MxN * sizeof(int));
    int* matrix2 = (int*)malloc(size_MxN * sizeof(int));
    int* matrix3 = (int*)malloc(size_MxN * sizeof(int));

    for (int i = 0; i < size_MxN; i++) {
        matrix1[i] = matrix[i];
        matrix2[i] = matrix[i];
        matrix3[i] = matrix[i];
    }

    for (int i = 0; i < size; i++) {
        matrix1[i * size] = vector[i];
        matrix2[i * size + 1] = vector[i];
        matrix3[i * size + 2] = vector[i];
    }

    sum = del_matrix(x, size_MxN);

    int sum1 = del_matrix(matrix1, size_MxN);
    int sum2 = del_matrix(matrix2, size_MxN);
    int sum3 = del_matrix(matrix3, size_MxN);

    if (sum != 0 && size == 3)
        return ((double)sum1 / (double)sum) + ((double)sum2 / (double)sum) + ((double)sum3 / (double)sum);
    if (sum != 0 && size == 2)
        return ((double)sum1 / (double)sum) + ((double)sum2 / (double)sum);
    return -1;
}