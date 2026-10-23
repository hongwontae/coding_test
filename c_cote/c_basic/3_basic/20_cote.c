// 카운트 다운

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    
    
    int len = start_num-end_num+1;
    
    int * p = (int *) malloc (sizeof(int) * len);
    
    int index = 0;
    
    int num_num = start_num;
    
    while (true) {
        
        p[index] = num_num;
        
        if (num_num == end_num) { break; }
        --num_num;
        ++index;
        
    }
    
    return p;
    
}