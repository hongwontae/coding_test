// 카운트 업

// 정수 start_num와 end_num가 주어질 때, 
// start_num부터 end_num까지의 숫자를 차례로 담은 리스트를 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * solution (int start_num, int end_num) {

    int arr_length = end_num-start_num+1;

    int * p = (int *) malloc (sizeof(int) * arr_length);

    int index = 0;

    for (int i = start_num; i <= end_num; ++i) {
        p[index] = i;
        index+=1;
    }

    for (int i = 0; i < arr_length; i++) {
        printf("p[i] = %d\n", p[i]);
    }

    return p;
}


int main (void) {

    solution(2, 7);

    return 0;
}