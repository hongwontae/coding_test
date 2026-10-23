// 문자열 뒤집기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution_1(const char* my_string, int s, int e) {
    
    size_t result_len = strlen(my_string);
   
    char * result = malloc (result_len+1);
    
    char reverse_string [e-s+2];
    
    int index = 0;
    
    for (int i = e; i >= s; --i) {
        reverse_string[index] = my_string[i];
        index++;
    }
    
    reverse_string[e-s+2] = '\0';
    
    
    for (int i = 0; i < s; ++i) {
        result[i] = my_string[i];
    }
    
    
    int index_1 = 0;
    
    for (int i = s; i<=e; ++i) {
        result[i] = reverse_string[index_1];
        ++index_1;
    }
        
    
    for (int i = e+1; i <result_len; ++i) {
        result[i] = my_string[i];
    }
    
    result[result_len] = '\0';
    
    
    return result;
    

}


char* solution_2(const char* my_string, int s, int e) {
    
    size_t len = strlen(my_string);
    char * copy_data = malloc (len + 1);
    strcpy(copy_data, my_string);
    
    int reverse_index = e;
    
    for (int i = s; i <=e; ++i) {
        copy_data[i] = my_string[reverse_index];
        --reverse_index;
    }
    
    
    return copy_data;

}


int main (void) {

    char my_string [] = "Progra21Sremm3";

    char * p = solution_2(my_string, 6, 12);

    printf("p = %s\n", p);

    free(p);

    p = NULL;

    return 0;
}