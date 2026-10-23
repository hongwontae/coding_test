#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    
    int count = 0;
    
    int arr_1[arr_len];
    int arr_2[arr_len];
    
    printf("%zu\n", arr_len);
    
    memcpy(arr_1, arr, sizeof(int) * arr_len);
    memcpy(arr_2, arr, sizeof(int) * arr_len);
    
    while (true) {
        
        for (int i = 0; i < arr_len; ++i) {
          if (arr_1[i] >= 50 && arr_1[i] % 2 == 0) {
            arr_1[i] /= 2;
        } else if (arr_1[i] < 50 && arr_1[i] % 2 == 1) {
            arr_1[i] = arr_1[i] * 2 + 1;
        }
        }
        
        if (memcmp(arr_1, arr_2, sizeof(int) * arr_len) == 0) {

            return count;
        }
        
        memcpy(arr_2, arr_1, sizeof(int) * arr_len);
        
        
        count++;
    }
    
}