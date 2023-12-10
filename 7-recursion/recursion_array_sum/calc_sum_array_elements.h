#include <math.h>

int fun(int* array, int n, int array_size) {
    if (n + 1 == array_size) {
        return array[n];
    }
    else {
        return array[n] + fun(array, n + 1, array_size);
    }
}

int calc_sum_elements(int* array, int array_size){
    if (array_size <= 0) {
        return -1;
    }
    else {
        return fun(array, 0, array_size);
    }
}
