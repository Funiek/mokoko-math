//
// Created by Krzysiek on 01.03.2022.
//

#include "mokokolinalg.h"
#include <stdio.h>
#include <stdlib.h>

void test_print() {
    printf("TEST\n");
}

void print_matrix(Matrix matrix) {
    for(int x=0; x<matrix.x_count; x++) {
        for(int y=0; y<matrix.y_count; y++) {
            printf("%d ",matrix.array[x][y]);
        }
        printf("\n");
    }
}

Matrix create_matrix(int** array) {
    Matrix matrix;
    matrix.array = array;
    return matrix;
}