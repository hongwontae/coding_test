// 접미사 인지 확인하기

// 어떤 문자열에 대해서 접미사는 특정 인덱스부터 시작하는 문자열을 의미합니다. 
// 예를 들어, "banana"의 모든 접미사는 "banana", "anana", "nana", "ana", "na", "a"입니다.
// 문자열 my_string과 is_suffix가 주어질 때,
// is_suffix가 my_string의 접미사라면 1을, 아니면 0을 return 하는 solution 함수를 작성해 주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution_2(const char* my_string, const char* is_suffix)
{
    for (int i = 0; my_string[i] != '\0'; ++i)
    {
        if (strcmp(&my_string[i], is_suffix) == 0)
            return 1;
    }

    return 0;
}


int solution_1(const char* my_string, const char* is_suffix) {
    
    size_t my_string_length = strlen(my_string);
    
    char ** pp = (char **) malloc (sizeof(char *) * my_string_length);
    
    for (int i = 0; my_string[i] != '\0'; ++i) {
        pp[i] = malloc (my_string_length-i+1);
        strcpy(pp[i], &my_string[i]);
    }
    
    int result = 0;
    
    for (int i = 0; my_string[i] != '\0'; ++i) {
        if (strcmp(pp[i], is_suffix) == 0) {
            result = 1;
            break;
        }
    }

    for (int i = 0; my_string[i] != '\0'; ++i) {
        free(pp[i]);
    }

    free(pp);
    
    return result;
}


int main (void) {

    char my_string [] = "banana";

    char target [] = "ana";

    int result = solution_2(my_string, target);

    printf("result = %d\n", result);

    return 0;

}