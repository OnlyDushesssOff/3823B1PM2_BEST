#include <math.h>

double fun(double A,int n, int k) {
    if (n + 1 == k-1) {
        return (A + 1) / (n+1);
    }
    else {
        return (A + 1) / (n+1) + fun((A + 1) / (n+1), n + 1, k);
    }
}

double find_sum_elements_series(int k){
    int n = 0;
    if (k == 0) {
        return 0;
    }
    if (k < 0) {
        return -1;
    }
    return fun(0, 0, k);
}
