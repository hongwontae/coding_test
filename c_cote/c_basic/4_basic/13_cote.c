// 문자 지우기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int indices[], size_t indices_len) {

    size_t string_len = strlen(my_string);

    size_t len = string_len - indices_len;

    char *p = malloc(len + 1);

    size_t p_index = 0;

    for (size_t i = 0; i < string_len; ++i) {

        bool is_removed = false;

        for (size_t j = 0; j < indices_len; ++j) {

            if (i == indices[j]) {
                is_removed = true;
                break;
            }
        }

        if (!is_removed) {
            p[p_index] = my_string[i];
            p_index++;
        }
    }

    p[p_index] = '\0';

    return p;
}


int main (void) {

    char name [] = "apporoograpemmemprs";
    int indices [] = {1, 16, 6, 15, 0, 10, 11, 3};

    char * p = solution(name, indices, 8);

    printf("p = %s\n", p);

    free(p);

    p = NULL;

    return 0;
}