// 특정한 문자를 대문자로 바꾸기

// 영소문자로 이루어진 문자열 my_string과 영소문자 1글자로 이루어진 문자열 alp가 매개변수로 주어질 때,
//  my_string에서 alp에 해당하는 모든 글자를 대문자로 바꾼 문자열을 return 하는 solution 함수를 작성해 주세요.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* my_string, const char* alp) {
    char target = alp[0];
    
    printf("target : %c\n", target);
    
    size_t length = strlen(my_string)+1;
    
    char * p = (char *) malloc (length);
    
    p[length-1] = '\0';
    
    for (int i = 0; my_string[i] != '\0'; i++) {
        if (my_string[i] == target) {
            p[i] = toupper(my_string[i]);
            continue;
        }
        p[i] = my_string[i];
    }
    
    return p;
    
}


int main (void) {

    char * p = solution("proprogramers", "p");

    printf("p -> %s\n", p);

    free(p);


    return 0;
}