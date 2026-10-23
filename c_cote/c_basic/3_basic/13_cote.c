// 조건에 맞게 수열 반환하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    

    int * p = (int *) malloc (sizeof(int) * arr_len);
    
    
    for (int i = 0; i < arr_len; ++i) {

        if (arr[i] >= 50 && arr[i] % 2 == 0) {
            p[i] = arr[i] / 2;
        } else if (arr[i] < 50 && arr[i] % 2 != 0) {
            p[i] = arr[i] * 2;
        } else {
            p[i] = arr[i];
        }
    }
    
    return p;
    
    
}