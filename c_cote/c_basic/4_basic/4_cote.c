// 9로 나눈 나머지


#include <stdio.h>
#include <string.h>

int solution(const char* number) {
    
    size_t len = strlen(number);
    
    int result = 0;
    
    for (int i = 0; i < len; ++i) {
        result+=number[i]-'0';
    }
    
    int final_result = result % 9;
    
    
    
    return final_result;
    
}


int main (void) {

    int result = solution("12345");

    printf("result = %d\n", result);

    return 0;
}