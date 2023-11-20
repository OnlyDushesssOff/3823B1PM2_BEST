#include <math.h>

int* find_even(int* arr, int size){
    int prov = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            int* ans = &arr[i];
            return ans;
            break;
        }
    }
}
