// 공백으로 구분하기

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char ** solution (char arr_string []) {

    // 널 문자를 고려한 복사할 대상의 길이
    size_t copy_string_length = strlen(arr_string)+1;

    // case_1
    char str_1 [copy_string_length];
    char * saveper = NULL;
    strcpy(str_1, arr_string);
    
    int index_1 = 0;

    char * token_1 = strtok_r(str_1, " ",&saveper);

    // 전체 동적 할당 개수를 알아내는 로직
    while (token_1 != NULL) {
        token_1 = strtok_r(NULL, " ", &saveper);
        ++index_1;
    }

    // case_2
    char str_2 [copy_string_length];
    char * saveper_2 = NULL;
    strcpy(str_2, arr_string);

    // 전체 동적 할당 길이
    char ** pp = malloc (sizeof(char *) * index_1);

    char * token_2 = strtok_r(str_2, " ", &saveper_2);
    int index_2 = 0;

    while (token_2 != NULL) {
        // 분기된 문자열의 널 문자를 고려한 길이를 파악
        size_t element_length = strlen(token_2)+1;
        pp[index_2] = malloc (sizeof(char) * element_length);
        strcpy(pp[index_2], token_2);
        ++index_2;
        token_2 = strtok_r(NULL, " ", &saveper_2);
    }


    return pp;


}


int main (void) {

    char str [] = "Hello  World Hll";

    char ** ppointer = solution(str);
    
    for (int i = 0; i < 3; ++i) {
        printf("ppointer[%d] = %s\n", i, ppointer[i]);
        free(ppointer[i]);
    }

    free(ppointer);


    return 0;
}
