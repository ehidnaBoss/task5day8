/*
  Quest 1 received. Make corrections in the src/maxmin.c program so it compiles itself and works correctly
 (finds max and min out of 3 integer numbers and displays them on the screen). Do not change the structure of
 the program. In case of incorrect input, you must output n/a.

 **/

#include <stdio.h>

void maxmin(int prob1, int prob2, int prob3, int *max, int *min);

/* Find a max & min probabilities */
int main() {
    double x, y, z;
    int max, min;
    if (scanf("%lf %lf %lf", &x, &y, &z) != 3) {
        printf("n/a");
        return 0;
    }
    if ((int)x != x || (int)y != y || (int)z != z) {
        printf("n/a");
        return 0;
    }

    maxmin((int)x, (int)y, (int)z, &max, &min);

    printf("%d %d", max, min);

    return 0;
}

/* This function should be kept !!! (Your AI) */
/* But errors & bugs should be fixed         */
void maxmin(int prob1, int prob2, int prob3, int *max, int *min) {
    *max = *min = prob1;

    if (prob2 > *max) *max = prob2;
    if (prob2 < *min) *min = prob2;

    if (prob3 > *max) *max = prob3;
    if (prob3 < *min) *min = prob3;
}
