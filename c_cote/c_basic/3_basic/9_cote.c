// 문자열 잘라서 정렬하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}

char** solution(const char* myString)
{
    size_t len = strlen(myString);

    int considering = 0;

    if (myString[len - 1] != 'x') {
        considering = 1;
    }

    // 마지막에 x를 하나 추가할지 결정
    size_t copy_len = len + considering;

    // '\0'까지 필요하므로 +1
    char *copy_data = malloc(copy_len + 1);

    for (size_t i = 0; i < len; i++) {
        copy_data[i] = myString[i];
    }

    if (considering) {
        copy_data[copy_len - 1] = 'x';
    }

    copy_data[copy_len] = '\0';


    // x 개수 세기
    int final_index = 0;

    for (int i = 0; copy_data[i] != '\0'; i++) {
        if (copy_data[i] == 'x') {
            final_index++;
        }
    }


    // 최대 final_index개의 문자열이 나올 수 있음
    char **pp = malloc(sizeof(char *) * final_index);

    char *saveper;
    int tok_index = 0;

    char *token = strtok_r(copy_data, "x", &saveper);

    while (token != NULL) {

        size_t token_len = strlen(token);

        pp[tok_index] = malloc(token_len + 1);

        strcpy(pp[tok_index], token);

        tok_index++;

        token = strtok_r(NULL, "x", &saveper);
    }


    // ❗ final_index가 아니라 실제 만들어진 개수
    qsort(pp, tok_index, sizeof(char *), compare);

    free(copy_data);

    return pp;
}