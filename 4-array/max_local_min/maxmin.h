int maxmin(int input[], int size){
    int min = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            if (input[i] < input[i + 1]) {
                if (min < input[i]){
                    min = input[i];
                }
            }
        }
        else if (i == size - 1) {
            if (input[i] < input[i - 1]) {
                if (min < input[i]) {
                    min = input[i];
                }
            }
        }
        else {
            if (input[i] < input[i - 1] && input[i] < input[i + 1]) {
                if (min < input[i]) {
                    min = input[i];
                }
            }
        }
    }
    return min;
}