// 접두사인지 확인하기

// 어떤 문자열에 대해서 접두사는 특정 인덱스까지의 문자열을 의미합니다.
// 예를 들어, "banana"의 모든 접두사는 "b", "ba", "ban", "bana", "banan", "banana"입니다.
// 문자열 my_string과 is_prefix가 주어질 때, is_prefix가 my_string의 접두사라면 1을, 아니면 0을 return 하는 solution 함수를 작성해 주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution_1(const char* my_string, const char* is_prefix) {

    size_t len = strlen(my_string);
    
    char * arr [len];
    
    int index = 1;
    
    for (int i = 0; i < len; ++i) {
        arr[i] = (char *) malloc (index+1);
        memcpy(arr[i], my_string, index);
        arr[i][index] = '\0';
        index++;
    }

    
    for (int i = 0; i < len; ++i) {

        if (strcmp(arr[i], is_prefix) == 0) {
            
            return 1;
        } 
    }

    for (int i = 0; i < len; ++i) {
        free(arr[i]);
    }
    
    return 0;
    
}

int solution_2 (const char* my_string, const char* is_prefix) {
    
    size_t len = strlen(is_prefix);

    if (strncmp(my_string, is_prefix, len) == 0) {
        return 1;
    }

    return 0;

}


int main (void) {

    char name [] = "banana";

    char is_prefix [] = "ban";

    int result = solution_2(name, is_prefix);

    printf("result : %d\n", result);


    return 0;
}