// A로 B 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution_1(const char* before, const char* after) {
    
    int a = 0;
    int b = 0;
    
    size_t len = strlen(before);
    
    for (int i = 0; i < len; ++i) {
        a += before[i] - '0';
        b += after[i] - '0';
    }
    
    if (a == b) {
        return 1;
    } 
    
    return 0;
    
}

int solution_2 (const char * before, const char * after) {

    int count [128] = {0};

    size_t len = strlen(before);

    for (int i = 0; i < len; ++i) {
        count[(unsigned char)before[i]]++;
        count[(unsigned char)after[i]]--;
    }

    for (int i = 0; i < 128; ++i) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;

}

int main (void) {

    const char name_1 [] = "olleh";
    const char name_2 [] = "hello";

    int result_1 = solution_1(name_1, name_2);
    int result_2 = solution_2(name_1, name_2);

    printf("result_1 = %d \n", result_1);
    printf("result_2 = %d \n", result_2);


    return 0;
}