#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double summ = 1;
    float skal = 0;
    float mod1 = 0;
    float mod2 = 0;
    for (int i = 0; i < size; i++) {
        skal += vec1[i] * vec2[i];
        mod1 += pow(vec1[i], 2);
        mod2 += pow(vec2[i], 2);
    }
    float modOP = sqrt(mod1) * sqrt(mod2);
    summ = skal / modOP;
    return (int)(ceil(acos(summ) * 57));
}
