// 간단한 식 계산하기

// 문자열 binomial이 매개변수로 주어집니다. binomial은 "a op b" 형태의 이항식이고
// a와 b는 음이 아닌 정수, op는 '+', '-', '*' 중 하나입니다. 주어진 식을 계산한 정수를 return 하는 solution 함수를 작성해 주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution_1(const char* binomial) {
    
    size_t copy_len = strlen(binomial);
    char copy_data [copy_len+1];
    strcpy(copy_data, binomial);
    
    printf("copy_data = %s\n", copy_data);
    
    char * name_set [3];
    
    char * saveper;
    char * token = strtok_r(copy_data, " ", &saveper);
    
    int index = 0;
    
    while (token != NULL) {
        size_t token_len = strlen(token);
        name_set[index] = (char *) malloc (sizeof(char) * (token_len+1));
        strcpy(name_set[index], token);
        index++;
        token = strtok_r(NULL, " ", &saveper);
    }
    
    for (int i = 0; i < 3; ++i) {
        printf("%s\n", name_set[i]);
    }
    
    int result1 = atoi(name_set[0]);
    int result2 = atoi(name_set[2]);
    char op = name_set[1][0];
    
    int final_result = 0;
    
    switch (op) {
        case '+' :
            final_result = result1+result2;
            break;
        case '-' :
            final_result = result1-result2;
            break;
        case '*' :
            final_result = result1 * result2;
            break;
        default :
            break;
    }
    
    return final_result;
    
    return 0;
    
    
}

int solution_2 (const char * binimial) {

    size_t len = strlen(binimial);
    char copy_arr [len+1];
    strcpy(copy_arr, binimial);

    char * char_p [3];
    char * saveper;

    int index = 0;

    char * token = strtok_r(copy_arr, " ", &saveper);

    while (token != NULL) {
        char_p[index] = token;
        ++index ;
        token = strtok_r(NULL, " ", &saveper);
    }

    int result_1 = atoi(char_p[0]);
    int result_2 = atoi(char_p[2]);
    char operator = char_p[1][0];

    int result = 0;

    switch (operator) {
        case '+' :
            result = result_1 + result_2;
            break;
        case '-' :
            result = result_1 - result_2;
            break;
        case '*' :
            result = result_1 * result_2;
            break;
    }

    return result;


}


int main (void) {

    char name [] = "12 * 34";

    int result = solution_1(name);

   printf("result = %d\n", result);

    return 0;
}