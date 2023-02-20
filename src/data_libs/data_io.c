#include "data_io.h"
int input(double **data, int *n) {
    if (scanf("%d", n) != 1 || *n <= 0) {
        return 1;
    }

    *data = malloc(*n * sizeof(int));

    for (int i = 0; i < *n; i++) {
        double buf;
        if (scanf("%lf", &buf) != 1) {
            return 2;
        }
        (*data)[i] = buf;
    }

    return 0;
}

void output(double *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2lf", data[i]);

        if(i + 1 < n) printf(" ");
    }
}