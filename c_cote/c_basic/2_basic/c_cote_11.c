// 첫 번쨰로 나오는 음수

// 정수 리스트 num_list가 주어질 때,
// 첫 번째로 나오는 음수의 인덱스를 return하도록 solution 함수를 완성해주세요. 음수가 없다면 -1을 return합니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num_list[], size_t num_list_len) {
    
    int result = -1;
    
    for (int i = 0; i < num_list_len; ++i) {
        if (num_list[i] < 0) {
            return result = i;
        }
    }

    return result;
}

int main (void) {

    int arr_int [] = {10, 20, 30, 5, -1, 20};

    size_t length = sizeof(arr_int) / sizeof(arr_int[0]);

    int result = solution(arr_int, length);

    printf("result : %d\n", result);

    return 0;
}

