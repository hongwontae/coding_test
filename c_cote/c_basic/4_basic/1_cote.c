// 배열 만들기 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k, int * heap_size) {
    
    int len = n/k;
    
    *heap_size = len;
    
    int * p = (int *) malloc (sizeof(int) * len);
    
    int acc = k;
    
    for (int i = 0; i < len; ++i) {
        if (acc > n) {
            break;
        }
        p[i] = acc;
        acc+=k;
    }
    
    return p;
    
}


int main (void) {

    int heap_size = 0;

    int * p = solution(10, 3, &heap_size);

    for (int i = 0; i < heap_size; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    p = NULL;


    return 0;
}