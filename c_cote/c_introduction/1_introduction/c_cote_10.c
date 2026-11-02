// 7의 개수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int array[], size_t array_len) {
    
    int result = 0;
    
    for (int i = 0; i < array_len; ++i) {
        char name[6];
        
        sprintf(name, "%d", array[i]);
        
        for (int j = 0; name[j] != '\0'; ++j) {
            if (name[j] == '7') {
                result++;
            }
        }
    }
    
    return result;
}

int main(void) {
    int array[] = {10, 29};
    size_t array_len = sizeof(array) / sizeof(array[0]);
    
    int count = solution(array, array_len);
    printf("The number of '7's in the array is: %d\n", count);
    
    return 0;
}