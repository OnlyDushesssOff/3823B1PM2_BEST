#include <math.h>

unsigned int little_big_convert(unsigned int input){

    int* bite1[] = { 0,0,0,0,0,0,0,0 };
    int* bite2[] = { 0,0,0,0,0,0,0,0 };
    int* bite3[] = { 0,0,0,0,0,0,0,0 };
    int* bite4[] = { 0,0,0,0,0,0,0,0 };
    int** bite_big[] = {bite1, bite2, bite3, bite4};

    unsigned int inp = input;
    int count = 0;
    while (input) {
        input /= 2;
        count += 1;
    }
    for (int i = 0; i < count; i++) {
        if (i / 8 == 3) {
            bite_big[0][7 - i % 8] = inp % 2;
        }
        else if (i / 8 == 2) {
            bite_big[1][7 - i % 8] = inp % 2;
        }
        else if (i / 8 == 1) {
            bite_big[2][7-i%8] = inp % 2;
        }
        else if (i / 8 == 0) {
            bite_big[3][7-i%8 ] = inp % 2;
        }
        inp /= 2;
    }

    unsigned long int ans = 0;
    for (int i = 0; i < 32; i++) {
        if (i / 8 == 3) {
            int b = bite_big[0][i%8];
            ans += b * pow(2, 31 - i);
        }
        else if (i / 8 == 2) {
            int b = bite_big[1][i%8];
            ans += b * pow(2, 31 - i);
        }
        else if (i / 8 == 1) {
            int b = bite_big[2][i%8];
            ans += b * pow(2, 31 - i);
        }
        else if (i / 8 == 0) {
            int b = bite_big[3][i%8];
            ans += b * pow(2, 31 - i);
        }
    }
    return ans;
}