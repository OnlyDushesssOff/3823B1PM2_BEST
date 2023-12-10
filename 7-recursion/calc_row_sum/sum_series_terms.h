#include <math.h>

double fun(int k, int n) {
	if (n == 1) {
		return 1;
	}
	if (k + 1 == n) {
		return 1 / (double)k;
	}
	else {
		return 1 / (double)n + fun(k, n - 1);
	}
}

double sum_series(int n) {
	if (n > 10000) {
		double summ = 0;
		for (int i = 1; i < n / 10000; i++) {
			summ += fun((i - 1)*10000, i * 10000);
		}
		summ += fun(n / 10000 * 10000, n);
		return summ;
	}
	if (n <= 0) {
		return -1;
	}
	else {
		return fun(0,n);
	}
}
