// 이어 붙인 수

// 정수가 담긴 리스트 num_list가 주어집니다.
// num_list의 홀수만 순서대로 이어 붙인 수와 짝수만 순서대로 이어 붙인 수의 합을 return하도록 solution 함수를 완성해주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

int solution(int num_list[], size_t num_list_len) {

    char name_1 [10];
    char name_2 [10];
    
    int index_1 = 0;
    int index_2 = 0;
    
    for (int i = 0; i < num_list_len; ++i) {
        if (num_list[i] % 2 == 0) {
            name_1[index_1] = '0' + num_list[i];
            ++index_1;
        } else {
            name_2[index_2] = '0' + num_list[i];
            ++index_2;
        }
    }
    
    int a = atoi(name_1);
    int b = atoi(name_2);
    
    return a+b;
  
}


int main (void) {

    int arr_set [] = {10, 20, 30, 40};

    size_t length = sizeof(arr_set) / sizeof(arr_set[0]);


    int a = solution(arr_set, length);

    printf("a : %d\n", a);


    return 0;
}