int num_invers(int num) {

    int inv = 0;
    if (num < 0)
        return 0;
    while (num > 0) {
        inv += 1;
        num /= 10;
    }
    int mas[inv];
    int i = 0, otv = 0;
    while (num > 0) {
        mas[i] = num % 10;
        num /= 10;
        i += 1;
    }
    for (int j = 0; j < inv; j++) {
        int t = 1;
        for (int k = 0; k < (inv - j - 1); k++) {
            t *= 10;
        }
        otv += mas[j] * t;
    }
    return otv;
}