// 길이에 따른 연산

// 정수가 담긴 리스트 num_list가 주어질 때,
// 리스트의 길이가 11 이상이면 리스트에 있는 모든 원소의 합을 10 이하이면 모든 원소의 곱을 return하도록 solution 함수를 완성해주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num_list[], size_t num_list_len) {
    
     int result = 0;
    
    if (num_list_len >= 11) {
        for (int i = 0; i < num_list_len; ++i) {
            result += num_list[i];
        }
    } else {
        result = 1;
        for (int i = 0; i < num_list_len; ++i) {
            result *= num_list[i];
        }
    }
    
    return result;
}

int main (void) {

    int arr_list_1 [] = {1,2,3,4,5};
    int arr_list_2 [] = {1,2,3,4,5,6,7,8,9,10,11,12};

    size_t length_1 = sizeof(arr_list_1) / sizeof(arr_list_1[0]);
    size_t length_2 = sizeof(arr_list_2) / sizeof(arr_list_2[0]);

    int a = solution(arr_list_1, length_1);
    int b = solution(arr_list_2, length_2);

    printf("arr_list 1 value : %d\n", a);
    printf("arr_list 2 value : %d\n", b);


    return 0;
}