#include <math.h>

int fun(int first, int second) {
    int ost = first % second;
    if (ost == 0) {
        return second;
    }
    else {
        return fun(second, ost);
    }
}

int nod(int first, int second){
    if (first <= 0 || second <= 0) {
        return - 1;
    }
    if (first > second) {
        return fun(first, second);
    }
    else {
        return fun(second, first);
    }
}
