// 조건에 맞게 수열 반환하기

//정수 배열 arr와 자연수 k가 주어집니다.
// 만약 k가 홀수라면 arr의 모든 원소에 k를 곱하고, k가 짝수라면 arr의 모든 원소에 k를 더합니다.
// 이러한 변환을 마친 후의 arr를 return 하는 solution 함수를 완성해 주세요.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int * solution (int arr [], size_t arr_len, int k) {

    printf("arr_len : %zu\n", arr_len);
    printf("arr[%d] : %d\n", 1, arr[1]);

    int * p = (int *) malloc(sizeof(int) * arr_len);

    if (k % 2 == 0) {
        // 짝수
        for (int i =0; i < arr_len; ++i) {
            p[i] = arr[i]+k;
        }
    } else {
        // 홀수
        for (int i = 0; i < arr_len; ++i) {
            p[i] = arr[i] * k;
        }
    }

    return p;

}



int main (void) {

    int arr [] = {10, 20, 30, 40, 50};

    int k_1 = 10;

    size_t arr_length = sizeof(arr) / sizeof(arr[0]);

    int * pp = solution(arr, arr_length, k_1);

    for (int i = 0; i < arr_length; ++i) {
        printf("pp[%d] = %d\n", i, pp[i]);
    }

    free(pp);


    return 0;
}