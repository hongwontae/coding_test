// n개 간격의 원소들

// 정수 리스트 num_list와 정수 n이 주어질 때,
// num_list의 첫 번째 원소부터 마지막 원소까지 n개 간격으로 저장되어있는
// 원소들을 차례로 담은 리스트를 return하도록 solution 함수를 완성해주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n, int * total_len) {
   
    int total_length = 0;
    
    for (int i = 0; i < num_list_len; i+=n) {
        ++total_length;
    }

    *total_len = total_length;
    
    int * p = (int *) malloc (sizeof(int) * total_length);
    
    int index = 0;
    
    for (int i = 0; i < num_list_len; i+=n) {
        p[index] = num_list[i];
        ++index;
    }
    
    return p;
    
}


int main (void) {

    int arr_list [] = {10, 20, 30, 40, 50, 60, 70};

    size_t length = sizeof(arr_list) / sizeof(arr_list[0]);

    int gap = 2;

    int total_len = 0;

    int * p = solution(arr_list, length, gap, &total_len);

    for (int i = 0; i < total_len; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    return 0;
}