#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int* solution(int numbers[], size_t numbers_len, const char* direction) {
   
    int * p = (int *) malloc (sizeof(int) * numbers_len);
    memcpy(p, numbers, sizeof(int) * numbers_len);
    
    
    if (strcmp(direction, "right") == 0) {
        
        int temp = p[numbers_len-1];
        
        for (int i = numbers_len-2; i != -1; --i) {
            p[i+1] = p[i];
        }
        
        p[0] = temp;
        
        
    } else {
       int temp = p[0];
        
        for (int i =1; i < numbers_len ;++i) {
            p[i-1] = p[i];
        }
        
        
        p[numbers_len-1] = temp;
    }
    
    return p;
    
}
int main (void) {

    int numbers [] = {4, 455, 6, 4, -1, 45, 6};
    char name [] = "left";
    size_t len = 7;

    int * p = solution(numbers, len, name);

    for (int i = 0; i < len; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    p = NULL;


    return 0;
}