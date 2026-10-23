// 문자열 정수의 합

// 한 자리 정수로 이루어진 문자열 num_str이 주어질 때, 각 자리수의 합을 return하도록 solution 함수를 완성해주세요.


#include <stdio.h>
#include <string.h>


int main (void) {

    char string_number_set [] = "12345";

    int acc = 0;

    for (int i = 0; string_number_set[i] != '\0'; ++i) {
        acc+=string_number_set[i] - '0';
    }

    printf("acc : %d\n", acc);



    return 0;

}