// 수열과 구간 쿼리 3

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows) {
    
    // query에 해당하는 arr 인덱스끼리 값을 교환하라
    
    int * p = malloc (sizeof(int) * arr_len);
    memcpy(p, arr, sizeof(int) * arr_len);

    
    for (int i = 0; i < queries_rows; ++i) {
        
        int qu_1 = queries[i][0];
        int qu_2 = queries[i][1];
        
        int temp = p[qu_1];
        
        p[qu_1] = p [qu_2];
        p[qu_2] = temp;
        
    }
    
    return p;
    
    
}


int main (void) {

    int arr [] = {0, 1, 2, 3, 4};
    size_t arr_len = 5;

    int arr_1 [] = {0,3};
    int arr_2 [] = {1,2};
    int arr_3 [] = {1,4};

    int * arr_set [] = {arr_1, arr_2, arr_3};
    size_t arr_rows_len = 3;

    int * p = solution(arr, arr_len, arr_set, arr_rows_len);

    for (int i = 0; i < arr_len; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    p = NULL;


    return 0;
}