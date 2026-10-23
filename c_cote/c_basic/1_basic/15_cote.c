// 문자열의 뒤의 n 글자

// 문자열 my_string과 정수 n이 매개변수로 주어질 때,
// my_string의 뒤의 n글자로 이루어진 문자열을 return 하는 solution 함수를 작성해 주세요.

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


char * solution (char * my_string, int n) {
    
    // 빠져야하는 인덱스
    size_t calculate = strlen(my_string) - n;
    
    char new_string [n+1];
    
    new_string[n] = '\0';
        
    int index = 0;
    
    for (int i = calculate; my_string[i] != '\0'; ++i ) {
        new_string[index] = my_string[i];
        ++index;
    }
    
    char * p = (char *) malloc (sizeof(char) * (n+1));
    
    strcpy(p, new_string);
    
    return p;

}


int main (void) {

    char my_string [] = "Programssss2";

    char * kk = solution(my_string, 5);

    printf("kk : %s\n", kk);

    return 0;

}