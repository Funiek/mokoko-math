//
// Created by Krzysiek on 01.03.2022.
//

#ifndef MOKOKO_MOKOKOLINALG_H
#define MOKOKO_MOKOKOLINALG_H


typedef struct Matrix {
    int idx;
    int **array;
    int rows;
    int cols;
} Matrix;

typedef struct Stack {
    Matrix *array;
    unsigned capacity;
    int top;
} Stack;

typedef struct StackNode {
    Matrix matrix;
    struct StackNode *next;
} StackNode;

//test if library included properly
void test_print();

//print matrix
void matrix_print(Matrix *matrix);

//create and return Matrix
Matrix *matrix_create(int **array, int rows, int cols);

//create empty Matrix
Matrix *matrix_create_empty(int rows, int cols);

//create int 2Darray
int **matrix_create_int_2Darray(int rows, int cols);

//sum Matrix
Matrix *matrix_sum(Matrix *matrix1, Matrix *matrix2);


#endif //MOKOKO_MOKOKOLINALG_H
