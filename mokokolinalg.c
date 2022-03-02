//
// Created by Krzysiek on 01.03.2022.
//

#include "mokokolinalg.h"
#include <stdio.h>
#include <stdlib.h>


int matrix_idx_generator = 0;

void test_print() {
    printf("TEST\n");
}

void matrix_print(Matrix *matrix) {
    for (int x = 0; x < matrix->rows; x++) {
        for (int y = 0; y < matrix->cols; y++) {
            printf("%d ", matrix->array[x][y]);
        }
        printf("\n");
    }
}

Matrix *matrix_create(int **array, int rows, int cols) {
    Matrix *matrix = (Matrix *) malloc(sizeof(Matrix));
    matrix->rows = rows;
    matrix->cols = cols;
    matrix->idx = matrix_idx_generator++;
    matrix->array = array;
    return matrix;
}

Matrix *matrix_create_empty(int rows, int cols) {
    Matrix *matrix = (Matrix *) malloc(sizeof(Matrix));
    matrix->rows = rows;
    matrix->cols = cols;
    matrix->idx = matrix_idx_generator++;
    matrix->array = matrix_create_int_2Darray(rows,cols);
    return matrix;
}

int** matrix_create_int_2Darray(int rows, int cols) {
    int** array = (int**)malloc(rows*sizeof(int*));
    for(int i=0; i<rows; i++) {
        array[i] = (int*)malloc(cols*sizeof(int));

        for(int j=0;j<cols;j++) {
            array[i][j] = 0;
        }
    }

    return array;
}

Matrix *matrix_sum(Matrix *matrix1, Matrix *matrix2) {
    if (matrix1->cols != matrix2->cols || matrix1->rows != matrix2->rows) return NULL;


    Matrix *matrix = matrix_create_empty(matrix1->rows, matrix1->cols);

    int **array1 = matrix1->array;
    int **array2 = matrix2->array;

    for (int row = 0; row < matrix1->rows; row++) {
        for (int col = 0; col < matrix1->cols; col++) {
            matrix->array[row][col] = array1[row][col] + array2[row][col];
        }
    }
    return matrix;
}
