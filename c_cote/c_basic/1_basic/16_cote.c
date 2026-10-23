// 문자열로 변환

// 정수 n이 주어질 때, n을 문자열로 변환하여 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <string.h>

int main () {

    int num = 20;

    char one_char;
    char arr_string [5];

    if (num < 10) {
        one_char = num+'0';
        printf("one_char : %c\n", one_char);
    } else {
        sprintf(arr_string, "%d", num);
        printf("arr_string : %s\n", arr_string);
    }

    

    return 0;

}