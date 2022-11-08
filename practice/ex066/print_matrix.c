#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void print(int matrix[][5]) {
    int tam = 5;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%2i ", matrix[i][j]);
        }
        printf("\n");
    }
}

int plusColunm(int matrix2[][5], int c) {
    int plus = 0;
    int tam = 5;

    for (int k = 0; k < tam; k++) 
        plus += matrix2[k][c];
    return plus;
};

int plusLine(int matrix1[][5], int l) {
    int c, plus = 0;
    int tam = 5;

    for (c = 0; c < tam; c++) 
        plus += matrix1[l][c];
    
    return plus;
};

int main(void) {
    int mat[5][5];
    int tam = 5;


    srand(time(NULL));

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            mat[i][j] = rand() % 10;
        }
    }
    
    print(mat);
    printf("\n\n");
    for (int i = 0; i < tam; i++) 
         printf("Plus of the line %i: %i\n", i + 1, plusLine(mat, i));
    printf("\n\n");
    for (int i = 0; i < tam; i++) 
         printf("Plus of the colunm %i: %i\n", i + 1, plusColunm(mat, i));
    

    return 0;
}