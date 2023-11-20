#include <math.h>

int* find_even(int* arr, int size){
    int prov = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
<<<<<<< HEAD
            prov = 0;
=======
>>>>>>> fc3c644f35690a2386309d72d14f05c989666fe4
            int* ans = &arr[i];
            return ans;
            break;
        }
    }
    if (prov == 1) {
        return NULL;
    }
}
