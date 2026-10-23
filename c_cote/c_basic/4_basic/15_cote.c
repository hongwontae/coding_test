// 빈 배열에 추가, 삭제하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len, int * total_size) {
    
    int max_len = 0;
    int len = 0;
    
    for (int i = 0; i < arr_len; ++i) {
        if (flag[i]) {
            int tmp = arr[i] * 2;
            max_len += tmp;
        } 
    }
    
        for (int i = 0; i < arr_len; ++i) {
        if (flag[i]) {
            int tmp = arr[i] * 2;
            len += tmp;
        } else {
            int tmp = arr[i];
            len-=tmp;
        }
    }

    *total_size = len;
    
    int * p = (int *) malloc (sizeof(int) * max_len);
    
    int index = 0;
    
    for (int i = 0; i < arr_len; ++i) {
        if (flag[i]) {
            int tmp = arr[i] * 2;
            for (int j = 0; j < tmp; ++j) {
                p[index] = arr[i];
                ++index;
            }
        } else {
            int tmp = arr[i];
            
            for (int j = 0; j < tmp; ++j) {
                --index;
                p[index] = 0;
                
            }
        }
    }
    
    int *temp = realloc(p, sizeof(int) * len);

    if (temp == NULL) {
        printf("heap 동적 할당 실패\n");
        return NULL;
    }
    
    return temp;
    
    
}

int main (void) {

    int arr [] = {3, 2, 4, 1, 3};
    bool flag [] = {true, false, true, false, false};
    int size = 0;

    int * result = solution(arr, 5, flag, 5, &size);

    if (result == NULL) {
        return 0;
    }

    for (int i = 0; i < size; ++i) {
        printf("arr[%d] = %d\n", i, result[i]);
    }

    free(result);

    result = NULL;


    return 0;

}