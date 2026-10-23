// 마지막 두 원소

// 정수 리스트 num_list가 주어질 때,
// 마지막 원소가 그전 원소보다 크면 마지막 원소에서 그전 원소를 뺀 값을
// 마지막 원소가 그전 원소보다 크지 않다면 마지막 원소를 두 배한 값을 추가하여 
// return하도록 solution 함수를 완성해주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int * address) {

    int * p = (int *) malloc (sizeof(int) * num_list_len + 1);
    *address = num_list_len+1;
    
    int result = 0;
    int prev_value = num_list[num_list_len-2];
    int last_value = num_list[num_list_len-1];
    
    if (last_value > prev_value) {
        result = last_value - prev_value;
    } else {
        result = last_value * 2;
    }
    
    for (int i = 0; i < num_list_len; ++i) {
        p[i] = num_list[i];
    }
    p[num_list_len] = result;
    
    return p;
    
}


int main (void) {

    int arr [] = {10, 30, 90, 90, 90};
    size_t arr_length = sizeof(arr)/sizeof(arr[0]);

    int total_length = 0;

    int * p = solution(arr, arr_length, &total_length);

    for (int i =0; i < total_length; ++i){
        printf("p[%d] : %d\n", i, p[i]);
    }

    free(p);


    return 0;
}