// qr code

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution_1(int q, int r, const char* code) {
    
    size_t str_len = strlen(code);
    
    char * str_p = malloc (1000);
    
    int int_arr [str_len];
    
    for (int i = 0; i < str_len; ++i) {
        int_arr[i] = i%q;
    }
    
    int index = 0;
    
    for (int i = 0; i < str_len; ++i) {
        if (int_arr[i] == r) {
            str_p[index] = code[i];
            printf("code[%d] = %c\n", i, code[i]);
            index++;
        }
    }
    
    str_p[index] = '\0';
    
    printf("count = %d\n", index);
    
    char * aa = realloc(str_p, sizeof(char) * (index+1));

    if (aa == NULL) {
        return;
    }
    
    return aa;
    

}

char* solution_2(int q, int r, const char* code) {

    size_t str_len = strlen(code);

    char * str_p = malloc(str_len + 1);

    size_t index = 0;

    for (size_t i = 0; i < str_len; ++i) {
        if (i % q == r) {
            str_p[index] = code[i];
            index++;
        }
    }

    str_p[index] = '\0';

    char *temp = realloc(str_p, index + 1);

    if (temp == NULL) {
        return;
    }

    return temp;
}