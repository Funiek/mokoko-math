#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "mokokolinalg.h"

int main(int argc, char** argv) {
    int** array = (int**)malloc(5*sizeof(int*));
    for(int i=0; i<5; i++) {
        array[i] = (int*)malloc(5*sizeof(int));
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            array[i][j] = (i+1)*(j+1);
        }
    }

    Matrix matrix;

    matrix.array = array;
    matrix.x_count = 5;
    matrix.y_count = 5;
    matrix.idx = 1;

    print_matrix(matrix);

    return 0;
}