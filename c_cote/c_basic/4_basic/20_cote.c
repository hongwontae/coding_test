// 배열의 길이를 2의 거듭제곱으로 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int* solution(int arr[], size_t arr_len, int * total_len) {
    
    
    int len = 0;
        
    int calcul = 1;
    
    
    while (true) {
        if (calcul > arr_len) {
            len = calcul;        
            break;
        }
        calcul*=2;
    }
    
    int * p = calloc(len, sizeof(int));
    *total_len = len;
    
    for (int i = 0; i < arr_len; ++i) {
        p[i] = arr[i];
    }
    
    return p;
    
}


int main (void) {


    int arr [] = {1, 2, 3, 4, 5, 6};
    size_t arr_len = 6;

    int total_len = 0;

    int * p = solution(arr, arr_len, &total_len);

    for (int i = 0; i < total_len; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    p = NULL;

    return 0;
}