// 배열의 원소 삭제하기

// 정수 배열 arr과 delete_list가 있습니다.
// arr의 원소 중 delete_list의 원소를 모두 삭제하고 남은 원소들은 기존의 arr에 있던 순서를 유지한 배열을 return 하는 solution 함수를 작성해 주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int delete_list[], size_t delete_list_len, int * head_size) {
    
    size_t total_length = arr_len;
    
    for (int i = 0; i < arr_len; ++i) {
        for (int j = 0; j < delete_list_len; ++j) {
            if (arr[i] == delete_list[j]) {
                --total_length;
                break;
            }
        }
    }
    
    printf("total_length = %zu\n",total_length);
    
    int * p = (int *) malloc (sizeof(int) * total_length);
    *head_size = total_length;
    
    int boolean = 1;
    int index = 0;
    
    for (int i = 0; i < arr_len; ++i) {
        boolean = 1;
        for (int j = 0; j < delete_list_len; ++j) {
            if (arr[i] == delete_list[j]) {
                boolean = 0;
                break;
            }
        }
        if (boolean) {
            p[index] = arr[i];
            ++index;
        }
    }
    
    
    return p;
    

}


int main (void) {

    int arr [] = {293, 1000, 395, 678, 94};
    int delete_list [] = {94, 777, 104, 1000, 1, 12};

    size_t arr_len = sizeof(arr) / sizeof(arr[0]);
    size_t delete_len = sizeof(delete_list) / sizeof(delete_list[0]);

    int heap_size = 0;

    int * p = solution(arr, arr_len, delete_list, delete_len, &heap_size);

    for (int i = 0; i < heap_size; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }


    free(p);

    return 0;
}