// 글자 이어 붙여 문자열 만들기

// 문자열 my_string과 정수 배열 index_list가 매개변수로 주어집니다.
// my_string의 index_list의 원소들에 해당하는 인덱스의 글자들을 순서대로
//  이어 붙인 문자열을 return 하는 solution 함수를 작성해 주세요.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* solution(const char* my_string,
               int index_list[],
               size_t index_list_len) 
{
    char * p = (char *) malloc (sizeof(char) * index_list_len +1);
    p[index_list_len] = '\0';
    
    for (int i =0; i < index_list_len; i++) {
        int index = index_list[i];
        p[i] = my_string[index];
    }
    
    return p;
}


int main (void) {

    char name [] = "cvsgiorszzzmrpaqpe";
    int arr_list [] = {16, 6, 5, 3, 12, 14, 11, 11, 17, 12, 7};


    char * p = solution(name, arr_list, 11);

    printf("all name : %s\n", p);

    free(p);

    return 0;
}