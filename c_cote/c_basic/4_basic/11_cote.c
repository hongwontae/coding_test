// 1로 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    
    int result = 0;
    
    int data = 0;
    
    for (int i = 0; i < num_list_len; ++i) {
        
        data = num_list[i];
        
        while (true) {
            
            if (data == 1) {
                break;
            }
            
            if (data % 2 == 0) {
                data/=2;
                result++;
            } else {
                --data;
                data/=2;
                result++;
            }
            
        }
    }
    
    return result;
    
}


int main (void) {


    int num_list [] = {12, 4, 15, 1, 14};

    int result = solution(num_list, 5);

    printf("result = %d\n", result);


    return 0;
}