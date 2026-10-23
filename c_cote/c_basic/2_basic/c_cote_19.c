// 뒤에서 5등 위로

// 정수로 이루어진 리스트 num_list가 주어집니다. 
// num_list에서 가장 작은 5개의 수를 제외한 수들을 오름차순으로 담은 리스트를 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);
}

int* solution(int num_list[], size_t num_list_len) {
    
    int * p = (int *) malloc (sizeof(int) * (num_list_len-5));
    

    qsort(num_list, num_list_len, sizeof(int), compare);
    
    int index = 0;
    
    for (int i = 0; i < num_list_len; ++i) {
        if (i < 5) {
            continue;
        }
        p[index] = num_list[i];
        index++;
    }
    
    return p;
    
}

int main (void) {


    int arr_list [] = {12, 4, 15, 46, 38, 1, 14, 56, 32, 10};
    size_t length = sizeof(arr_list) / sizeof(arr_list[0]);

    int * p = solution(arr_list, length);

    for (int i = 0; i < length-5; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    return 0;
}