// 할 일 목록


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char** solution(const char* todo_list[], size_t todo_list_len, bool finished[], size_t finished_len) {
    
    int index_1 = 0;
    
    for (int i = 0; i < finished_len; ++i) {
        if (finished[i] == false) {
            ++index_1;
        }
    }
    
    printf("index_1 : %d\n", index_1);
    
    char ** pp = (char *) malloc (sizeof(char *) * index_1);
    
    int index_2 = 0;
    
    for (int i = 0; i < todo_list_len; ++i) {
        if (finished[i] == false) {
            size_t len = strlen(todo_list[i]);
            pp[index_2] = (char *) malloc (len+1);
            strcpy(pp[index_2], todo_list[i]);
            index_2++;
        } else {
            continue;
        }
    }
    
    return pp;
    
    
}