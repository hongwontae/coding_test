// n 번쨰 원소부터

// 정수 리스트 num_list와 정수 n이 주어질 때,
// n 번째 원소부터 마지막 원소까지의 모든 원소를 담은 리스트를 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {

    int length = 0;
    
    for (int i =0; i < num_list_len; ++i ) {
        if (i >=n-1) {
            ++length;
        }
    }
    
    int * p = (int *) malloc (sizeof(int) * length);


    int index = 0;
    for (int i = 0; i < num_list_len; ++i) {
        if (i >=n-1) {
            p[index] = num_list[i];
            ++index;
        };
    }
    return p;    
}

int main (void) {

    int arr_set [] = {10, 20, 30, 40, 50};
    size_t length = sizeof(arr_set) / sizeof(arr_set[0]);
    int n = 2;

    int * p = solution(arr_set, length, n);

    printf("p[%d] = %d\n", 1, p[0]);
    printf("p[%d] = %d\n", 1, p[1]);
    printf("p[%d] = %d\n", 1, p[2]);
    printf("p[%d] = %d\n", 1, p[3]);

    free(p);

    return 0;
    

}