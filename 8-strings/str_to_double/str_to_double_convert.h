#include <math.h>
#include <string.h>
#include <ctype.h>

double convert(char num[]) {
    int len = strlen(num);
    long long int pol = 0;
    long long int pon = 0;
    long long count = 1;
    int flag1 = 1;
    int flag2 = 1;
    for (int i = 0; i < len; i++) {
        if ((i == 0) && (num[i] == '-'))
            flag1 *= (-1);
        else if ((num[i] >= 48) && (num[i]) <= 57) {
            if (flag2 == 1) {
                pol = pol * 10 + (num[i] % 48);
            }
            else {
                pon = pon * 10 + (num[i] % 48);
                count *= 10;
            }
        }
        else
            flag2 = 0;
    }
    return ((double)pol + (double)pon / count) * flag1;
}