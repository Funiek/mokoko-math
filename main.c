#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "mokokolinalg.h"

#define ROWS 5
#define COLS 5

int main(int argc, char** argv) {
    int** array = matrix_create_int_2Darray(ROWS,COLS);

    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLS; j++) {
            array[i][j] = (i+1)*(j+1);
        }
    }

    int** array2 = matrix_create_int_2Darray(ROWS,COLS);

    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLS; j++) {
            array2[i][j] = (i+2)*(j+2);
        }
    }

    Matrix *matrix = matrix_create(array,ROWS,COLS);
    Matrix *matrix2 = matrix_create(array2,ROWS,COLS);

    Matrix *res = matrix_sum(matrix,matrix2);

    matrix_print(res);

    return 0;
}