#include <math.h>
#include <stdlib.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){

    int* matrixC = malloc(sizeof(int) * aM * bN);
    if (aM != bN || bM != aN) {
        return 0;
    }
    int* matrixA1 = malloc(sizeof(int) * aN);
    int* matrixA2 = malloc(sizeof(int) * aN);
    int* matrixB1 = malloc(sizeof(int) * bM);
    int* matrixB2 = malloc(sizeof(int) * bM);

    int** matrixA = malloc(sizeof(int*) * 2);
    int** matrixB = malloc(sizeof(int*) * 2);
    matrixA[0] = matrixA1;
    matrixB[0] = matrixB1;
    matrixA[1] = matrixA2;
    matrixB[1] = matrixB2;

    int sizeA = aM * aN;
    int sizeB = bM * bN;

    for (int i = 0; i < aM; i++) {
        for (int j = 0; j < aN; j++) {
            matrixA[i][j] = A[i * aN + j];
        }
    }
    for (int i = 0; i < bN; i++) {
        for (int j = 0; j < bM; j++) {
            matrixB[i][j] = B[j*bN + i];
        }
    }
    for (int i = 0; i < aM; i++) {
        for (int j = 0; j < bN; j++) {
            int summ = 0;
            for (int t = 0; t < aN; t++) {
                summ += matrixA[i][t] * matrixB[j][t];
            }
            matrixC[i * aM + j] = summ;
        }
    }
    return matrixC;
}
