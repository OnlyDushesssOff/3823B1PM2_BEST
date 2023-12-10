#include <math.h>

void fun(int* array, int array_size, int n) {
    if (n == 0) {
        int t1 = array[n];
        int t2 = array[array_size - n - 1];
        array[array_size - n - 1] = t1;
        array[n] = t2;
    }
    else {
        int t1 = array[n];
        int t2 = array[array_size - n - 1];
        array[array_size - n - 1] = t1;
        array[n] = t2;
        return fun(array, array_size, n - 1);
    }
}

void reverse_array(int* array, int array_size) {
    if (array_size > 1)
        return fun(array, array_size, array_size / 2 - 1);
}