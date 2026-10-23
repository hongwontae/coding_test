// 2의 영역

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int * length) {
    
    int count = 0;
    
    for (int i = 0; i < arr_len; ++i) {
        if (arr[i] == 2) {
            ++count;
        }
    }
    
    if (count == 0) {
        int * p = malloc (4);
        p[0] = -1;
        return p;
    } else if (count == 1) {
        int * p = malloc (4);
        p[0] = 2;
        return p;
    }
    
    
    
    int arr_test [count];
    
    int index = 0;
    
    for (int i = 0; i < arr_len; ++i) {
        if (arr[i] == 2) {
            arr_test[index] = i;
            index++;
        }
    }
    

    int first_index = arr_test[0];
    int last_index = arr_test[count-1];
    
    
    int * p = malloc (sizeof(int) * last_index-first_index+1);
    *length = last_index-first_index+1;
    
    int index_2 = 0;
    
    for (int i = first_index; i <= last_index; ++i) {
        p[index_2] = arr[i];
        index_2++;
    }
    
    return p;
        
}


int main (void) {


    int arr [] = {1, 2, 1, 4, 5, 2, 9};
    size_t arr_len = 7;

    int length = 0;

    int * p = solution(arr, arr_len, &length);


    for (int i = 0; i < length; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    
    free(p);

    p = NULL;


    return 0;
}
    
    