#include <math.h>

char count_max_digit(long long int number){

    number = fabs(number);
    int col = 0;
    int max = 0;
    while (number) {
        int a = number % 10;
        if (max < a) {
            max = a;
            col = 1;
        }
        else if (max == a) {
            col += 1;
        }
        number /= 10;
    }
    return col;

}