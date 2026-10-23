// n보다 커질 때까지 더하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int numbers[], size_t numbers_len, int n) {
    
   int result = 0;
    
    for (int i = 0; i < numbers_len; ++i) {
        if (n >= result) {
            result += numbers[i];
        } else {
            break;
        }
    }
    return result;
}