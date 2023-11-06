#include <math.h>

unsigned long long calc_e(char order) {

    int col = order;
    double prov1 = pow(10, col);
    double prov2 = 1.0 / prov1;
    double a = 2.718281;
    for (int i = 1; i < 1000000; i++) {
        double b = pow((1.0 + 1.0 / i), i);
        if ((int)(a * prov1) == (int)(b * prov1)) {
            return i;
            break;
        }
    }
}