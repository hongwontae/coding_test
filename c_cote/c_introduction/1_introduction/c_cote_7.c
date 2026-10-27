
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    size_t len = strlen(s);

    char* p = malloc(len + 1);
    
    if (p == NULL) {
        return NULL;
    }

    int arr[128] = {0};

    // 1. 문자별 등장 횟수 계산
    for (size_t i = 0; i < len; ++i) {
        arr[(unsigned char)s[i]]++;
    }

    // 2. 한 번만 등장하는 문자를 사전 순으로 저장
    int count = 0;

    for (int i = 0; i < 128; ++i) {
        if (arr[i] == 1) {
            p[count++] = (char)i;
        }
    }

    // 3. 문자열의 끝 표시
    p[count] = '\0';

    char * re_p = realloc(p, count+1);

    return re_p;
}

int main (void) {

    const char arr [] = "abdc";

    char * p = solution(arr);

    printf("p = %s\n", p);

    free(p);

    p = NULL;

    return 0;
}