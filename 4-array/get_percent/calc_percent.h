#include <math.h>

int calc_percent(int matrix[], int size){
    int max = 0;
    int min = 100;
    for (int i = 0; i < size; i++) {
        if (matrix[i] > max) {
            max = matrix[i];
        }
        if (matrix[i] < min) {
            min = matrix[i];
        }
    }
    float r = (max - min) / 2;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (matrix[i] > r) {
            count += 1;
        }
    }
    return (int)(((float)count / (float)size) * 100);
}