#ifndef MOKOKO_H_INCLUDED
#define MOKOKO_H_INCLUDED

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

#endif