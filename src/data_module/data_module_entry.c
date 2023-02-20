#include <stdio.h>
#include <stdlib.h>

#include "data_process.h"
#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"

int main()
{
    double *data;
    int n;
    int flag = input(&data, &n);
    if (flag == 0) {
        int r_v = normalization(&data, n);
        if (r_v == 0) {
            printf("ERROR");
            free(data);
        } 
        if (r_v == 1) {
            output(data, n);
            free(data);
        }
        if (r_v == 2) {
            printf("n/a");
            free(data);
        }
    } else {
        if (flag == 1) {
            printf("n/a");
        } else {
            printf("n/a");
            free(data);
        }
    }

    return 0;
}
