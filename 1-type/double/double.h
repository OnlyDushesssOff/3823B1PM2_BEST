#include <math.h>

bool compare_double(double x, double y) {
    double minus = x - y;
    if (fabs(minus) < 0.000001){
        return true;
    } else {
        return false;
    }
     // Not implementation
}

int get_nearest_int(double x) {
    if (x-(int)x <= 0.499999999999999999999999){
        return (int)x;
    } else {
        return (int)x + 1;
    }
     // Not implementation
}

double get_fractional(double x) {
    if (x>0){
        return x - (int)x;
    } else{
        return x - ((int)x-1);
    }
 // Not implementation
}
