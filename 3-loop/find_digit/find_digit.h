#include <math.h>


char find_digit(double number, char digit) {

    long long int num = number, y1 = number * 10;
    int i1 = 0;
    int coun1 = 0;
    int dig = digit;
    int coun2 = 0;
    int i2 = 0;
    if ((dig < 0) || (dig > 9))
        return -1;
    while (num > 0) {
        if (num % 10 == dig)
            i1 = coun1;

        num /= 10;
        coun1 += 1;
    }
    if (y1 % 10 == 0) {
        if (coun1 - i1 != 0)
            return coun1 - i1;
        else
            return -1;
    }
    if (y1 % 10 != 0) {
        long long int t = number * 10000000000;
        while (t > 0) {
            if (t % 10 == dig)
                i2 = coun2;

            t /= 10;
            coun2 += 1;
        }
        if (coun2 - i2 != 0)
            return coun2 - i2 + 1;
        else
            return -1;
    }
}