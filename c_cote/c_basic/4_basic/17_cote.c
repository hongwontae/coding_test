// 문자열이 몇 번 등장하는지 세기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    size_t len_1 = strlen(myString);
    size_t len_2 = strlen(pat);
    
    size_t loop_len = len_1 -len_2 + 1;
    
    int count = 0;
    
    for (int i = 0; i < loop_len; ++i) {
        if (strncmp(myString+i, pat, len_2) == 0) {
            count++;
        }
    }
    
    return count;
    
}

int main (void) {

    const char my_string [] = {"banana"};
    const char pat [] = {"ana"};

    int result = solution(my_string, pat);

    printf("result = %d\n", result);


    return 0;
}