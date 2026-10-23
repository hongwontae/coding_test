// 소문자로 바꾸기

// 알파벳으로 이루어진 문자열 myString이 주어집니다. 모든 알파벳을 소문자로 변환하여 return 하는 solution 함수를 완성해 주세요.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char * solution (char arr []) {

    size_t index = strlen(arr);

    char * p_arr = (char *) malloc (sizeof(char) * (index+1));

    for (int i = 0; arr[i] != '\0'; ++i) {
        p_arr[i] = tolower(arr[i]);
    }

    p_arr[index] = '\0';

    return p_arr;

}


int main (void) {

    char my_string [] = "HELLO-WORLD";

    char * p = solution(my_string);

    printf("p : %s\n", p);

    free(p);

    return 0;

}