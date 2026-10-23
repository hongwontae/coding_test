// 원소들의 곱과 합

// 정수가 담긴 리스트 num_list가 주어질 때,
// 모든 원소들의 곱이 모든 원소들의 합의 제곱보다 작으면 1을 크면 0을 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>

int calculate (int num_list [], size_t length) {

    int acc = 0;

    int acc_multi = 1;

    for (int i = 0; i < length; ++i) {
        acc+=num_list[i];
    }

    for (int i = 0; i < length; ++i) {
        acc_multi*=num_list[i];
    }

    printf("+ = %d\n", acc);
    printf("* = %d\n", acc_multi);

    return acc_multi < acc * acc ? 1 : 0;


}


int main (void) {

    int num [] = {1, 2, 3,4};

    size_t num_length = sizeof(num)/sizeof(num[0]);

    int value = calculate(num, num_length);

    printf("value = %d\n", value);


    return 0;
}