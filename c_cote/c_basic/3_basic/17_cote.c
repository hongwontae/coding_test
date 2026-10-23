// 홀수 vs 짝수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int result_1 = 0;
    
    int result_2 = 0;
    
    for (int i = 0; i < num_list_len; ++i) {
        if (i % 2 == 0) {
            result_1+=num_list[i];
        } else {
            result_2+=num_list[i];
        }
    }
    
    return result_1 > result_2 ? result_1 : result_2 > result_1 ? result_2 : result_1;
    
}