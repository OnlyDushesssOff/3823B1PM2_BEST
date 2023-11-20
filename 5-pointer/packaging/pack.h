#include <math.h>
#include <stdlib.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    unsigned long long* mem = arr;
    if (size > 8) {
        return 0;
    }
    return mem[0];
}

unsigned char unpack_ull(unsigned long long input){
    unsigned char* bait = &input;
    return bait[4];
}