// 정수 찾기

// 정수 리스트 num_list와 찾으려는 정수 n이 주어질 때, num_list안에 n이 있으면 1을 없으면 0을 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len, int n) {
    
    int result = 0;
    
    for (int i = 0; i < num_list_len; ++i) {
        if (num_list[i] == n) {
            result = 1;
        }
    }
    
    
    return result;
}


int main (void ) {

    int arr_list [] = {10, 20, 30};

    size_t arr_length = sizeof(arr_list) / sizeof(arr_list[0]);

    int result = solution(arr_list, arr_length, 20);

    printf("result = %d\n", result);
    
    return 0;

}