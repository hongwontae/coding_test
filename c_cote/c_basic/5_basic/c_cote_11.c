#include <stdio.h>
#include <stdlib.h>

int** solution(int** arr, size_t arr_rows, size_t arr_cols) {
    size_t n = arr_rows > arr_cols ? arr_rows : arr_cols;

    int** answer = malloc(sizeof(int*) * n);

    for (size_t i = 0; i < n; i++) {
        answer[i] = calloc(n, sizeof(int));

        for (size_t j = 0; j < arr_cols && i < arr_rows; j++) {
            answer[i][j] = arr[i][j];
        }
    }

    return answer;
}

int main (void) {

    int arr_1 [] = {572, 22, 37};
    int arr_2 [] = {287, 726, 384};
    int arr_3 [] = {85, 137, 292};
    int arr_4 [] = {487, 13, 876};

    int * total_set [] = {arr_1, arr_2, arr_3, arr_4};

    int ** pp = solution(total_set, 4, 3);

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("pp[%d][%d] = %d\t", i, j, pp[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; ++i) {
        free(pp[i]);
    }

    free(pp);

    pp = NULL;

    return 0;
}