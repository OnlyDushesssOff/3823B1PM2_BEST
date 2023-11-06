#include <math.h>

char find_bin_pattern(int number){

    int dob[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int b = 0;
    int com = 0;
    int i1 = 0;
    while (number) {
        dob[i1] += number % 2;
        number /= 2;
        b += 1;
        i1 += 1;
    }
    for(int i2 = 0; i2 < b-2; i2++){
        if (dob[i2] == 1 && dob[i2 + 1] == 0 && dob[i2 + 2] == 1) {
            com += 1;
        }
    }
    return com;
}