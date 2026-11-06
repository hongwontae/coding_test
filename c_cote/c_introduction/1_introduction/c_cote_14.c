// 잘라서 배열로 저장하기

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_str, int n, int * length) {

    size_t my_str_len = strlen(my_str);
    
    size_t a = my_str_len/n;
    size_t one_len = n;
    size_t last_len = my_str_len % n;
    size_t double_size = last_len ? a+1 : a;
    *length = double_size;
    
    
    char ** pp = (char **) malloc (sizeof(char**) * double_size);
    int my_str_index = 0;
    
    // i가 결과 배열의 순서
    for (int i = 0; i < double_size; ++i) {
        
        if (last_len != 0 && i == double_size-1) {
            
            pp[i] = (char *) malloc (last_len+1);
            pp[i][last_len] = '\0';
            
            for (int j = 0; j < last_len; ++j) {
                pp[i][j] = my_str[my_str_index];
                my_str_index++;
            }
            
        } else {
            
            pp[i] = (char *) malloc (one_len+1);
            pp[i][one_len] = '\0';
            
            for (int j = 0; j < one_len; ++j) {
                pp[i][j] = my_str[my_str_index];
                my_str_index++;
            }
            
            
        }
        
    }

    
    return pp;
}


int main (void) {

    const char * my_str = "abc1Addfggg4556b";

    int length;

    char ** pp = solution(my_str, 6, &length);

    for (int i = 0; i < length; ++i) {
        printf("pp[%d] = %s\n", i, pp[i]);
    }

    for (int i = 0; i < length; ++i) {
        free(pp[i]);
    }

    free(pp);

    pp = NULL;

    return 0;
}