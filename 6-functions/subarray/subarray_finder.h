#include <math.h>

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int sum_ind = 0;
    int flag1 = 0, flag2 = 0, flag3 = 0, flag_gen = 3;
    for (int i = 0; i < array_size; i++) {
        if (array[i] == subarray1[0] && flag1 == 0) {
            int sum_sub1 = 0;
            for (int j1 = 0; j1 < subarray_size1; j1++) {
                if (array[i + j1] == subarray1[j1]) {
                    sum_sub1 += 1;
                }
            }
            if (sum_sub1 == subarray_size1) {
                sum_ind += i;
                flag1 = 1;
                flag_gen -= 1;
            }
        }
        if (array[i] == subarray2[0] && flag2 == 0) {
            int sum_sub2 = 0;
            for (int j1 = 0; j1 < subarray_size2; j1++) {
                if (array[i + j1] == subarray2[j1]) {
                    sum_sub2 += 1;
                }
            }
            if (sum_sub2 == subarray_size2) {
                sum_ind += i;
                flag2 = 1;
                flag_gen -= 1;
            }
        }
        if (array[i] == subarray3[0] && flag3 == 0) {
            int sum_sub3 = 0;
            for (int j1 = 0; j1 < subarray_size3; j1++) {
                if (array[i + j1] == subarray3[j1]) {
                    sum_sub3 += 1;
                }
            }
            if (sum_sub3 == subarray_size3) {
                sum_ind += i;
                flag3 = 1;
                flag_gen -= 1;
            }
        }
    }
    return sum_ind - 1 * flag_gen;
}
