// 순서 바꾸기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int num_list[], size_t num_list_len, int n) {
   
    int * p = (int *) malloc (sizeof(int) * num_list_len);
    
    
    int index = 0;
        
    for (int i = n; i < num_list_len; ++i) {
        p[index] = num_list[i];
        ++index;
    }
    
    for (int i = 0; i < n; ++i) {
        p[index] = num_list[i];
        ++index;
    }
    
    return p;
    
    
}