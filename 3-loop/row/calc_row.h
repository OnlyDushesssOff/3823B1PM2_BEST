#include <math.h>

long long calc_row(int n, long long k){
    
    int i = 1;
    long long int summ = 0;
        while (i <= n) {
            long long int summ1 = summ;
            summ += i * k;
            i += 1;
            if (k > 0 && (summ < pow(2, 63))) {
                return 0;
                break;
            }
            else if (k < 0 && (summ > pow(2, 63))) {
                return 0;
                break;
            }
        }
        return summ;
}