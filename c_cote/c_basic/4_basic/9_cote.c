// 특별한 이차원 배열 2

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** arr, size_t arr_rows, size_t arr_cols) {
    size_t len = arr_rows;
    
    int result = 1;
    
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (arr[i][j] != arr[j][i]) {
                result = 0;
                break;
            }
        }
    }
    
    
    printf("result = %d\n", result);
    return result;
}

int main (void) {

    int a_arr [] = {5, 192, 33};
    int b_arr [] = {192, 72, 95};
    int c_arr [] = {33, 95, 999};

    int * pp [] = {a_arr, b_arr, c_arr};

    int result = solution(pp, 3 ,3);

    printf("판정 결과 : %d\n", result);


    return 0;
}
