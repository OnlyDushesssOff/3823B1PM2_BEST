#include <math.h>

double limit(double eps, int n_max) {

    double s = 0.0;
    if (n_max == 1) {
        s = n_max / sqrt(n_max * n_max + n_max);
        return s;
    }
    else {
        double x1 = 0.0;
        double x2 = 0.0;
        for (int i = 1; i < n_max + 1; i++) {
            s = i / sqrt(i * i + i);
            x1 = x2;
            x2 = s;
            if (fabs(x2 - x1) <= eps){
                return s;
            }
        }
    }
    return s;
}