// 수열과 구간 쿼리1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len,
              int** queries, size_t queries_rows, size_t queries_cols) {

    int* p = malloc(sizeof(int) * arr_len);

    for (int i = 0; i < arr_len; ++i) {
        p[i] = arr[i];
    }

    for (int q = 0; q < queries_rows; ++q) {

        int s = queries[q][0];
        int e = queries[q][1];

        for (int i = s; i <= e; ++i) {
            p[i]++;
        }
    }

    return p;
}

int main (void) {


    int arr [] = {0, 1, 2, 3, 4};
    size_t arr_len = 5;

    int arr_1 [] = {1,2};
    int arr_2 [] = {2,3};
    int arr_3 [] = {4,5};

    int * queries [] = {arr_1, arr_2, arr_3};
    
    int * p = solution(arr, arr_len, queries, 3, 2);

    for (int i = 0; i < arr_len; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    return 0;
}