#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int min = 100;
    int min_ind = 100;
    for (int i = width + 1; i < length * width - width - 1; i++) {
        if (i % width != width - 1) {
            int plat[8] = { matrix[i - width - 1, i - width, i - width + 1, i - 1, i + 1, i + width - 1, i + width, i + width + 1] };
            int count = 0;
            for (int j = 0; j < 8; j++){
                if (matrix[i] < plat[j]) {
                    count += 1;
                }
            }
            if (count == 8) {
                if (matrix[i] < min) {
                    min = matrix[i];
                    min_ind = i;
                }
            }
        }
    }
    return 100 * (min_ind / width) + (min_ind - (min_ind / width) * width);
}
