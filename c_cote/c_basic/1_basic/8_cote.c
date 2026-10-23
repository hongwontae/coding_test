// 뒤에서 5등까지

// 정수로 이루어진 리스트 num_list가 주어집니다.
// num_list에서 가장 작은 5개의 수를 오름차순으로 담은 리스트를 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdlib.h>

int * solution (int arr [], size_t arr_length) {
    int * p = (int *) malloc (sizeof(int) * 5);

    for (int i = 0; i < arr_length; ++i) {
        for (int j = i+1; j < arr_length; ++j) {
            if (arr[i] > arr[j]) {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < arr_length; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    for (int i = 0; i < 5; ++i) {
        p[i] = arr[i];
    }

    for (int i = 0; i < 5; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    return p;

}


int main (void) {

    int arr_set [] = {30, 10, 20, 50, 2, 5, 7, 98};

    solution(arr_set, sizeof(arr_set)/sizeof(arr_set[0]));



    return 0;
}