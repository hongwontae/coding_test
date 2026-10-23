// 숨어있는 숫자의 덧셈

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    
    int result = 0;
    
    for (int i = 0; my_string[i] != '\0'; ++i) {
        
        if (isdigit(my_string[i])) {
            result+=my_string[i]-'0';
        }
        
    }
    
    return result;
    
}