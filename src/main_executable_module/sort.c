#include "sort.h"

#include <stdio.h>
#include <stdlib.h>

void sort(double **data, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((*data)[j] < (*data)[i]) {
                double temp = (*data)[i];
                (*data)[i] = (*data)[j];
                (*data)[j] = temp;
            }
        }
    }
}