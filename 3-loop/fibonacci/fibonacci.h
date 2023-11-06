long fib(int m){

    int f1 = 0;
    int f2 = 1;
    int fk = f1 + f2;
    int summ = f1+f2;
    if (m >= 0) {
        while (f1 + f2 <= m) {
            fk = f1 + f2;
            f1 = f2;
            f2 = fk;
            summ += fk;
        }
    }
    else {
        return -1;
    }
    return summ;
}