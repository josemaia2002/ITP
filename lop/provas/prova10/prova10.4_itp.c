#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nlin, ncol;
    int **mat;
} Matrix;

Matrix createMatrix(int lin, int col){
    Matrix m;
    m.nlin = lin;
    m.ncol = col;

    m.mat = malloc(sizeof(int*) * lin);
    for(int i = 0; i < lin; i++)
        m.mat[i] = malloc(sizeof(int) * col);

    return m;
}

void readMatrix(Matrix m){
    for(int i = 0; i < m.nlin; i++){
        for(int j = 0; j < m.ncol; j++){
            scanf("%d", &m.mat[i][j]);
        }
    }
}

void printMatrix(Matrix m){
    for(int i = 0; i < m.nlin; i++){
        for(int j = 0; j < m.ncol; j++){
            printf("%d ", m.mat[i][j]);
        }
        printf("\n");
    }
}

void destroyMatrix(Matrix* m){
    for(int i = 0; i < m->nlin; i++){
        free(m->mat[i]);
        m->mat[i] = NULL;
    }
    free(m->mat);
    m->mat = NULL;
}

int main() {
    int lin, col;            
    Matrix mat;

    scanf("%i %i", &lin, &col);
    mat = createMatrix(lin, col);
    readMatrix(mat);
    printMatrix(mat);
    destroyMatrix(&mat);

    if(mat.mat == NULL){
        printf("OK\n");
    }  
    return 0;
}