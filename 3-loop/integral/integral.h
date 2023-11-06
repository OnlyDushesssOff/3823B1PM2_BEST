#include <math.h>

double integral(double a, double b, double c, double left, double right){

    double nerav1 = (a * right * right * right / 3) + (b * right * right / 2) + c * right;
    double nerav2 = (a * left * left * left / 3) + (b * left * left / 2) + c * left;
    double otv = nerav1 - nerav2;
    if (otv < 0){
        return -1;
    }
    else{
        return otv;
    }
}