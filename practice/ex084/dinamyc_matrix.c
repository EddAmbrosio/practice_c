#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*      
            Dinamyc Matrix
        vector of vectors -> int* -> 10 27 32
                             int* -> 11 75 49
                             int* -> 43 82 10
                             int* -> 12 47 62         
*/
int main(void) {
    int **mat, i, j;

    mat = calloc(1, 4 * sizeof(int*));

    for(i = 0; i < 4; i++) 
        mat[i] = calloc(3,sizeof(int));
    
    srand(time(NULL));

    for(i = 0; i < 4; i++)
        for(j = 0; j < 3; j++)
            *(*(mat + i) + j) = rand() % 100;
            //mat[i][j] = rand() % 100;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) 
            printf("%2i ", (*(mat + i) + j));
            //printf("%2i ", mat[i][j]);
        printf("\n");
    }
    for( int i = 0; i < 4; i++)
        free(mat[i]);
    free(mat);    
    return 0;
}