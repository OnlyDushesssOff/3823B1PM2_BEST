#include <math.h>
#include <string.h>
#include <ctype.h>

int calculate_expression(char expression[]) {
    int size = strlen(expression);
    int copm1 = 0;
    int copm2 = 0;
    int flag = 0;
    int number = 0;
    for (int i = 0; i < size; i++) {
        if ((i >= 1) && (expression[i - 1] < 48) && (expression[i] < 48))
            return -1;
        else if ((expression[i] == '+') || (expression[i] == '-') || (i == size - 1)) {
            if (flag == 0) {
                if (i == size - 1)
                    number = number * 10 + ((int)expression[i] % 48);
                copm1 += number;
                flag = (int)expression[i] / 45;
                number = 0;
            }
            else if (flag == 1) {
                if (i == size - 1)
                    number = number * 10 + ((int)expression[i] % 48);
                copm2 += number;
                flag = (int)expression[i] / 45;
                number = 0;
            }
        }
        else
            number = number * 10 + ((int)expression[i] % 48);
    }
    return copm1 - copm2;
}