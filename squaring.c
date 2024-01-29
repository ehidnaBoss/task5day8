/* Make corrections in the src/squaring.c program so it compiles itself and works correctly (receives an array of integers via stdin, squares them and outputs the result to stdout). In case of incorrect input, you must output n/a. Decreasing the decomposition is not allowed–you can add functions if needed, but you cannot delete them.*/

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
