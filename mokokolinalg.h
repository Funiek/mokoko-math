//
// Created by Krzysiek on 01.03.2022.
//

#ifndef MOKOKO_MOKOKOLINALG_H
#define MOKOKO_MOKOKOLINALG_H

typedef struct Matrix{
    int idx;
    int** array;
    int x_count;
    int y_count;
} Matrix;

typedef struct Stack{
    Matrix* array;
    unsigned capacity;
    int top;
} Stack;

typedef struct StackNode{
    Matrix matrix;
    struct StackNode* next;
} StackNode;

//test if library included properly
void test_print();

//print matrix
void print_matrix(Matrix matrix);

//create and return Matrix
Matrix create_matrix(int** array);


#endif //MOKOKO_MOKOKOLINALG_H
