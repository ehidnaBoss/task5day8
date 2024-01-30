#include <stdio.h>
#define NMAX 10
int input(int *a, int *n);
int output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);
void output_result(int max_v,
                   int min_v,
                   double mean_v,
                   double variance_v);
int main()
{
    int n, data[NMAX];
    if(input(data, &n)){
        printf("n/a\n");
        return 1;
    }
    output(data, n);
    output_result(max(data, n),
                  min(data, n),
                  mean(data, n),
                  variance(data, n));
    return 0;
}

int input(int *a, int *n) {
    if(scanf("%d", n) != 1 || *n <= 0 || *n > 10){return 1;}
    for (int *p = a; p - a < *n; p++) {
        if(scanf("%d", p) != 1){return 1;}
    }
    if (getchar() != '\n'){
        return 1;
    }
    return 0;
}
int output(int *a, int n){
    if ((int)*a != *a) {
        printf("n/a");
        return 0;
    }
    for (int *p = a; p - a < n; p++) {
    printf("%d ", *p);
    }
    printf("\n");
    return 0;
}

int max(int *a, int n){
    int max = *a;
    for(int i = 0; i < n; i++) {
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}

int min(int *a, int n){
    int min = *a;
    for(int i = 0; i < n; i++) {
        if(min > a[i]){
            min = a[i];
        }
    }
    return min;
}

double mean(int *a, int n){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum/n;
}
double variance(int *a, int n){

    double temp = 0;
    for(int i = 0; i < n; i++){
        temp += (a[i] - mean(a,n)) * (a[i] - mean(a,n));
    }
    
    return temp/n;
}

void output_result(int max_v, int min_v, double mean_v, double variance_v){
    printf("%d ", max_v);
    printf("%d ", min_v);
    printf("%.6f ", mean_v);
    printf("%.6f ", variance_v);
    
}

