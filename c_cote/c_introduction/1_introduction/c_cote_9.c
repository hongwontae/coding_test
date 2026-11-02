// 가까운 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len, int n) {
    
    int result = array[0];
    int diff = abs(array[0] - n);
    
    for (int i = 1; i < array_len; ++i) {
        
        int a = abs(array[i] - n);
        
        if (diff > a) {
            diff = a;
            result = array[i];
        }
        
        if (diff == a) {
            result = array[i] > result ? result : array[i];
        }
    }
    
    return result;
    
}

int main (void) {

    int array [] = {3, 10, 30};
    int n = 20;
    int result = solution(array, sizeof(array) / sizeof(array[0]), n);

    printf("%d\n", result);


    return 0;
}