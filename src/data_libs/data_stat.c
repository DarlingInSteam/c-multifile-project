#include "data_stat.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
double max(double *data, int n) {
    double max = data[0];

    for (int i = 0; i < n; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    return max;
}
double min(double *data, int n) {
    double min = data[0];

    for (int i = 0; i < n; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }

    return min;
}
double mean(double *data, int n) {
    double mean_v = 0.0;

    for (int i = 0; i < n; i++) {
        mean_v += data[i] / n;
    }

    return mean_v;
}
double variance(double *data, int n) {
    double m_v = mean(data, n);
    double d_v = 0;

    for (double *p = data; p - data < n; p++) d_v += pow(*p - m_v, 2) / n;

    return d_v;
}