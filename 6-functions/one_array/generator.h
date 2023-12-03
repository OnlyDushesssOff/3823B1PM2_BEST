#include <math.h>
#include <stdlib.h>

int* array_generator(int* real_size, int k, int m, int f){

    *real_size = 11;
    int* array = malloc(sizeof(int) * *real_size);
    int a1 = 0;
    int a2 = a1 + f;
    array[0] = a1;
    array[1] = a2;
    for (int i = 2; i < 11; i++) {
        array[i] = a1;
    }
    return array;
}
