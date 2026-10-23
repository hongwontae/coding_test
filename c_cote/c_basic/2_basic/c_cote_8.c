// 배열의 원소만큼 추가하기

// 아무 원소도 들어있지 않은 빈 배열 X가 있습니다.
// 양의 정수 배열 arr가 매개변수로 주어질 때,
// arr의 앞에서부터 차례대로 원소를 보면서 원소가 a라면 X의 맨 뒤에 a를 a번 추가하는 일을 반복한 뒤의 
// 배열 X를 return 하는 solution 함수를 작성해 주세요.

// 주소의 주소를 넘겨서 망상
// 함수의 동작 후 배열의 길이를 알고 싶어서 int * length = NULL을 보내버림 -> 개 망상
// length의 값은 NULL입니다. *length -> NULL / 근데 NULL = 주소? -> 개 망상
// int length = 0; &length를 보내면 됩니다. 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int arr[], size_t arr_len, int * total) {
    
    int total_length = 0;
    
    for (int i = 0; i < arr_len; ++i) {
        total_length += arr[i];
    }
    
    *total = total_length;
    int * p = (int *) malloc (sizeof(int) * total_length);
    
    int index = 0;
    
    for (int i = 0; i < arr_len; ++i) {
        for (int j = 0; j < arr[i]; ++j) {
            p[index] = arr[i];
            ++index;
        }
    }
    
    return p;
    
}

int main (void) {

    int arr [] = {3, 2, 1};
    size_t arr_len = sizeof(arr) / sizeof(arr[0]);

    int total_len = 0;

    int * m_p = solution(arr, arr_len, &total_len);

    printf("total_len : %d\n", total_len);


    for (int i = 0; i < total_len; ++i) {
        printf("m_p[%d] : %d\n", i, m_p[i]);
    }

    free(m_p);


    return 0;
}