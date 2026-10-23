// 문자열의 앞의 n 글자

// 문자열 my_string과 정수 n이 매개변수로 주어질 때,
// my_string의 앞의 n글자로 이루어진 문자열을 return 하는 solution 함수를 작성해 주세요.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* my_string, int n) {

    char * c_p = (char *) malloc (sizeof(char) * n + 1);
    
    for (int i = 0; my_string[i] != '\0'; ++i) {
        if (i < n) {
            c_p[i] = my_string[i];
        }
    }
    
    c_p[n] = '\0';
    
    return c_p;
}


int main () {

    char name [] = "Hong Won Tae";
    int n = 3;

    char * p = solution(name, n);

    printf("n name : %s\n", p);

    free(p);


    return 0;
}