// 문자열 바꿔서 찾기

// 문자 "A"와 "B"로 이루어진 문자열 myString과 pat가 주어집니다.
// myString의 "A"를 "B"로, "B"를 "A"로 바꾼 문자열의 연속하는 부분 문자열 중 pat이 있으면 1을 아니면 0을 return 하는 solution 함수를 완성하세요.


#include <stdio.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    
    int result = 0;
    
    size_t length = strlen(myString);
    
    char copy_string [length+1];
    
    copy_string[length] = '\0';
    
    strcpy(copy_string, myString);
    
    for (int i = 0; myString[i] != '\0'; ++i) {
        if (myString[i] == 'A') {
            copy_string[i] = 'B';
        } else {
            copy_string[i] = 'A';
        }
    }
    
    if (strstr(copy_string, pat) != NULL) {
        result = 1;
    }
    
    return result;
    
}

int main (void) {

    char my_string [] = "ABBAA";
    char pat [] = "AABB";

    int result = solution(my_string, pat);

    printf("result = %d\n", result);

    return 0;
}