// 중복된 문자 제거

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    char * p = (char *) malloc (110);
    
    size_t len = strlen(my_string);
    char arr [len+1];
    strcpy(arr, my_string);
        
    for (int i = 0; i < len-1; ++i) {
        
        char fixed_value = my_string[i];
        
        for (int j = i+1; j < len; ++j) {
            if (fixed_value == '1') {
                break;
            }
            if (fixed_value == my_string[j]) {
                arr[j] = '1';
            }    
        }
    }
    
    // for (int i = 0; i < len; ++i) {
    //     printf("arr[%d] = %c\n", i, arr[i]);
    // }
    
    int index = 0;
    
    for (int i = 0; i < len; ++i) {
        if (arr[i] != '1') {
            p[index] = arr[i];
            index++;
        }
    }
    printf("index = %d\n", index);
    p[index] = '\0';
    
    char * re_p = realloc (p, index+1);
    
    
    return re_p;
    
    
}

int main (void) {

    char name [] = "people";

    char * p = solution(name);

    for (int i = 0; p[i] != '\0'; ++i) {
        printf("p[%d] = %c\n", i, p[i]);
    }

    free(p);

    p = NULL;


    return 0;
}