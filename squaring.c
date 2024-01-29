#include <stdio.h>
#define NMAX 10

int input(double *a, double *n);
void output(double *a, double n);
void squaring(double *a, double *n);

int main() {
    double n, data[NMAX];
    input(data, &n);
    squaring(data, &n);
    output(data, n);

    return 0;
}

int input(double *a, double *n) {
    if ((scanf("%lf", n) != 1) || (getchar() != '\n')) {
        printf("n/a");
        return 0;
    }
    if ((int)*a != *a) {
        printf("n/a");
        return 0;
    }

    for (double *p = a; p - a < *n; p++) {
        scanf("%lf", p);
    }
    return 0;
}

void output(double *a, double n) {
    for (double *p = a; p - a < n; p++) {
        printf("%d ", (int)*p);
    }
}

void squaring(double *a, double *n) {
    for (double *p = a; p - a < *n; p++) {
        *p *= *p;
    }
}
