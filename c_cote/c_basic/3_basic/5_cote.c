// 0 떼기

// 정수로 이루어진 문자열 n_str이 주어질 때,
// n_str의 가장 왼쪽에 처음으로 등장하는 0들을 뗀 문자열을 return하도록 solution 함수를 완성해주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution_1(const char* n_str) {

    size_t length = strlen(n_str);
    
    for (int i = 0; n_str[i] != '\0'; ++i) {
        if (n_str[i] == '0') {
            --length;
        } else {
            break;
        }
    }
    
    printf("length : %zu\n", length);
    
    char * result_string = (char *) malloc (sizeof(char) * (length+1));
    result_string[length] = '\0';
    
    int current_time = 0;
    int index = 0;
    
    for (int i = 0; n_str[i] != '\0'; ++i) {
        if (n_str[i] == '0' && current_time == 0) {
            continue;
        } else {
            current_time = 1;
            result_string[index] = n_str[i];
            ++index;
        }
    }
    
    
    return result_string;
    
}

char * solution_2 (const char * n_str) {

    int index = 0;

    while (n_str[index] == '0'){
        ++index;
    }

    char * p =(char *) malloc (strlen(n_str + index) + 1);
    strcpy(p, n_str+index);

    return p;

}

int main (void) {


    char n_str [] = "0010";

    char * p = solution_2(n_str);

    printf("p string = %s\n", p);

    free(p);

    return 0;   

}