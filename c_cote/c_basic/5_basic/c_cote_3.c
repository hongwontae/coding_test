// 문자열 여러 번 뒤집기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* my_string, int** queries, size_t queries_rows) {
    
    // int loop_total = (qu_2-qu_1+1)/2; -> 총 루프 횟수
    
    size_t copy_data_len = strlen(my_string);
    char * copy_data  = malloc(copy_data_len+1);
    strcpy(copy_data, my_string);
    
    for (int i = 0; i < queries_rows; ++i) {
        
        int qu_1 = queries[i][0];
        int qu_2 = queries[i][1];
        
        int loop_total = (qu_2-qu_1+1)/2;
        
        for (int i = 0; i  < loop_total; ++i) {
            char temp = copy_data[qu_2];
            copy_data[qu_2] = copy_data[qu_1];
            copy_data[qu_1] = temp;
            ++qu_1;
            --qu_2;
        }
        
    }
        
    return copy_data;

}


int main (void) {


    char my_string [] = "rermgorpsam";

    int arr_1 [] = {2,3};
    int arr_2 [] = {0,7};
    int arr_3 [] = {5,9};
    int arr_4 [] = {6,10};

    int * queries [] = {arr_1, arr_2, arr_3, arr_4};

    char * p = solution(my_string, queries, 4);

    for (int i = 0; i < strlen(my_string); ++i) {
        printf("p[%d] = %c\n", i, p[i]);
    }

    free(p);

    p = NULL;

    return 0;
}