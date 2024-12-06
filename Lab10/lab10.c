#include <stdio.h>
#include <malloc.h>

// Base funcs

int readnumber(){
    char buffer[128];
    if(!fgets(buffer, 128, stdin)){
        return 1;
    }
    return atoi(buffer);
}

//

// Matrix funcs

int fillMatrixWR(int** matrix, int fd, int sd, int maxnumber){
    srand(time(NULL));
    for (size_t i = 0; i < fd; i++){
        for (size_t j = 0; j < sd; j++){
            matrix[i][j] = rand()%maxnumber;
        }
    }
    return 0;
}

int printMatrix(int** matrix, int fd, int sd){
    for (size_t i = 0; i < fd; i++){
        for (size_t j = 0; j < sd; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//

// Spec funcs

// int valueinarray[]

//

int main() {
    int N,M;

    printf("Enter amount of matrix's rows: ");
    N = readnumber();
    printf("Enter amount of matrix's columns: ");
    M = readnumber();

    int** matrix = (int**)calloc(N, sizeof(int));
    for (size_t i = 0; i < N; i++){
        matrix[i] = (int*)calloc(M, sizeof(int));
    }
    fillMatrixWR(matrix, N, M, 8);
    printMatrix(matrix, N, M);
    int* matchnums = (int*)calloc(N * M, sizeof(int));
    int currentIndex = 0;
    int exists = 0;
    int placeinmatrix, matchingnum; 

    matrix[1][1] = 0;
    matchnums[0] = matrix[0][0];
    for (size_t i = 0; i < N; i++){
        for (size_t j = 0; j < M; j++){
            placeinmatrix = matrix[i][j];
            for (size_t u = 0; u <= currentIndex; u++){
                matchingnum = matchnums[u];
                if (matchingnum == placeinmatrix){
                    exists = 1;
                    break;
                }
            }
            
            if (exists != 1){
                currentIndex++;
                matchnums[currentIndex] = placeinmatrix;
            }
            exists=0;
        }
    }
    
    printf("Unique numbers: ");
    for (size_t i = 0; i <= currentIndex; i++){
        printf("%d ", matchnums[i]);
    }
    
    free(matchnums);
    free(matrix);
}