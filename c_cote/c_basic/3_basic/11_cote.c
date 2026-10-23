// ad 제거하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char ** solution(const char* strArr[], size_t strArr_len) {
    int index = 0;
    
    for (int i = 0; i < strArr_len; ++i) {
        if (strstr(strArr[i], "ad")){
            continue;
        }
        ++index;
    }
    
    int index_2 = 0;
    char ** pp = (char **) malloc (sizeof(char *) * index);
    
    for (int i = 0; i < strArr_len; ++i) {
        if (strstr(strArr[i], "ad")) {
            continue;
        }
        size_t len = strlen(strArr[i]);
        pp[index_2] = (char *) malloc (len+1);
        strcpy(pp[index_2], strArr[i]);
        
        ++index_2;
    }
    
    return pp;
}

