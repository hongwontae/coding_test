// 특별한 이차원 배열 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    int ** pp = (int **) malloc (sizeof(int *) * n);
    
    for (int i = 0; i < n; ++i) {
        pp[i] = (int *) malloc (sizeof(int) * n);
    }
    

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           if (i == j) {
               pp[i][j] = 1;
           } else {
               pp[i][j] = 0;
           }
        }
    }
    
    return pp;
    
}


int main (void) {

    int ** pp = solution(4);

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("pp[%d][%d] = %d\t", i,j,pp[i][j]);
        }
        printf("\n");
    } 

    for (int i = 0; i < 4; ++i) {
        free(pp[i]);
    }
    

    free(pp);


    return 0;
}