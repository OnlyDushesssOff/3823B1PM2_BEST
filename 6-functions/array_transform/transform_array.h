#include <math.h>

double* transform1(double* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] += 1;
    }
    return array;
}

double* transform2(double* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = sqrt(fabs(array[i]));
    }
    return array;
}

double* transform3(double* array, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    double arf = sum / size;
    for (int i = 0; i < size; i++) {
        array[i] = pow(fabs(array[i]), arf);
    }
    return array;
}

double* transform4(double* array, int size) {
    for (int i = 0; i < size; i++) {
        if ((int)array[i] % 2 == 0) { array[i] *= -1; }
        else { array[i] = pow(fabs(array[i]), -1); }
    }
    return array;
}

double* transform5(double* array, int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0 && (int)array[i] % 2 == 0) { array[i] = 0; }
    }
    return array;
}

double* transform6(double* array, int size) {
    double proc = 100 / (float)size;
    double sum1 = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            sum1 += proc;
        }
    }
    if ((int)sum1 > 48 && (int)sum1 < 52) {return array;}
    else {
        if (sum1 <= 48) {
            for (int i = 0; i < size; i++) {
                if (array[i] <= 0) {
                    array[i] = array[i] * -1 + 1;
                    sum1 += proc;
                    if ((int)sum1 >= 48) { return array; break; }
                }
            }
        }
        else if(sum1 >= 52){
            for (int i = 0; i < size; i++) {
                if (array[i] > 0) {
                    array[i] = array[i] * -1 -1;
                    sum1 -= proc;
                    if ((int)sum1 < 52) { return array; break; }
                }
            }
        }
    }
}

void transform(double* array, int size, int* comands, int comands_count){

    for (int j = 0; j < comands_count; j++) {
        if (comands[j] == 1) { array = transform1(array, size); }
        if (comands[j] == 2) { array = transform2(array, size); }
        if (comands[j] == 3) { array = transform3(array, size); }
        if (comands[j] == 4) { array = transform4(array, size); }
        if (comands[j] == 5) { array = transform5(array, size); }
        if (comands[j] == 6) { array = transform6(array, size); }
    }
}
