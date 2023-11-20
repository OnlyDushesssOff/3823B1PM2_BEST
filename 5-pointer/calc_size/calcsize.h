#include <math.h>

int calcsize(void* memory){

    char* memor = memory;
    int count = 0;
    int flag1 = 0, flag2 = 0;

    for (int i = 0; i < 10000; i++) {
        if (memor[i] == 11) {
            flag1 = count;
        }
        if (memor[i] == 47) {
            flag2 = count;
            break;
        }
        count += 1;
    }
    return count + flag2 - flag1;
}
