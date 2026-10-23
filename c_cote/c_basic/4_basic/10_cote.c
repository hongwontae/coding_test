// 2차원 배열 대각선 순회하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** board, size_t board_rows, size_t board_cols, int k) {
    
    int result = 0;
    
    
    for (int i = 0; i < board_rows; ++i) {
        for (int j = 0; j < board_cols; ++j) {
            if (i+j <= k) {
                result += board[i][j];
            }
        }
    }
    
    return result;
    
    
}


int main (void) {

    int arr_1 [] = {0,1,2};
    int arr_2 [] = {1,2,3};
    int arr_3 [] = {2,3,4};
    int arr_4 [] = {3,4,5};

    int * board [] = {arr_1, arr_2, arr_3, arr_4};

    int result = solution (board, 4, 3, 2);

    printf("result = %d\n", result);


    return 0;
}