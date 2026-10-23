// 등차수열의 특정한 항만 더하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int d, bool included[], size_t included_len) {
    
    int result = 0;
    
    int * p = malloc (sizeof(int) * included_len);
    
    memset(p, 0, sizeof(int) * included_len);
    
    for (int i = 0; i < included_len; ++i) {
        if (i == 0) {
            p[i] = a;
        } else {
            p[i] = p[i-1]+d;
        }
    }
    
    for (int i = 0; i < included_len; ++i) {
        if (included[i]) {
          result += p[i];  
        } 
    }
    
    return result;
    
}


int main (void) {

    int a = 7;
    int d = 1;

    bool included [] = {false, false, false, true, false, false, false};

    int result = solution(a, d, included, 7);

    printf("result = %d\n", result);


    return 0;
}