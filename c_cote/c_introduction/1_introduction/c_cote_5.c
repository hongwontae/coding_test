// k의 개수
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int i, int j, int k) {
    
    int count = 0;
    
    char name_1 [7];
    sprintf(name_1, "%d", k);
    
    for (int z = i; z<=j; ++z) {
        char name_2 [7];
        sprintf(name_2, "%d", z);

        size_t len = strlen(name_2);
        
        for (int m = 0; m < len; ++m) {
            if (name_2[m] == name_1[0]) {
                count++;
            }
        }
        
        
    }
    
    return count;
    
}

int main (void) {

    int result = solution(1, 13, 1);

    printf("k 개수 = %d\n", result);

    return 0;
}