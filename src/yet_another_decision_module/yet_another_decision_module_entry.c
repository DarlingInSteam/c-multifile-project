#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "decision.h"

int main()
{
    double *data;
    int n;
    int flag_inp = input(&data, &n);

    if (flag_inp == 0) {
        if (make_decision(data, n)) {
            printf("YES"); 
            free(data);
        } else {
            printf("NO");  
            free(data);
        }
    } else {
        if (flag_inp == 1) {
            printf("n/a");
        } else {
            printf("n/a");
            free(data);
        }
    }

    return 0;
}
