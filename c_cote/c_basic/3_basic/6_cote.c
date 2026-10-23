// 배열의 길이에 따라 다른 연산하기

// 정수 배열 arr과 정수 n이 매개변수로 주어집니다.
// arr의 길이가 홀수라면 arr의 모든 짝수 인덱스 위치에 n을 더한 배열을,
// arr의 길이가 짝수라면 arr의 모든 홀수 인덱스 위치에 n을 더한 배열을 return 하는 solution 함수를 작성해 주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int arr[], size_t arr_len, int n) {
    
    int * p = (int *) malloc (sizeof(int) * arr_len);
    
    if (arr_len % 2 == 0) {
        for (int i = 0; i < arr_len; ++i) {
            if (i % 2 == 0) {
                p[i] = arr[i];
            } else {
                p[i] = arr[i] + n;
            }
        }
    } else {
        for (int i = 0; i < arr_len; ++i) {
            if (i % 2 == 0) {
                p[i] = arr[i] + n;
            }  else {
                p[i] = arr[i];
            }
        }
    }
    
    return p;

}


int main (void) {


    int arr [] = {10, 20, 30, 40, 50, 60};

    size_t arr_len = sizeof(arr) / sizeof(arr[0]);

    int * p = solution(arr, arr_len, 5);

    for (int i = 0; i < arr_len; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);


    return 0;
}