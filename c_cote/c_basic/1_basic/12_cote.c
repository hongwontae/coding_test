// n 번째 원소까지

// 정수 리스트 num_list와 정수 n이 주어질 때,
// num_list의 첫 번째 원소부터 n 번째 원소까지의 모든 원소를 담은 리스트를 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdlib.h>

int * calculate (int arr [], size_t arr_length, int n) {

    // malloc으로 할당
    int * p = (int *)malloc (sizeof(int) * n);

    for (int i = 0; i < n; ++i) {
        p[i] = arr[i];
    }

    return p;
    
}


int main (void) {

    int arr [] = {10,20,30,40,50};

    size_t arr_len = sizeof(arr) / sizeof(arr[0]);

    int n = 3;

    int * p = calculate(arr, arr_len, n);

    for (int i = 0; i < n; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    return 0;
}