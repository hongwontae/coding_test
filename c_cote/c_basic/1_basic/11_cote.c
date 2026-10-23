// rny_string;

// 'm'과 "rn"이 모양이 비슷하게 생긴 점을 활용해 문자열에 장난을 하려고 합니다. 
// 문자열 rny_string이 주어질 때, rny_string의 모든 'm'을 "rn"으로 바꾼 문자열을 return 하는 solution 함수를 작성해 주세요.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calcaulate (const char * rny_string) {

    int m_num = 0;

    for (int i = 0; rny_string[i] != '\0'; ++i) {
        if (rny_string[i] == 'm') {
            ++m_num;
        }
    }

    size_t rny_string_length = strlen(rny_string);

    size_t total_length = rny_string_length + m_num;
    
    // m을 rn으로 바꾸었을 떄 정확한 문자열 + 널문자처리
    char * p = (char *) malloc (sizeof(char) * (total_length+1));

    // rny_string과 동적 할당된 index는 다릅니다.
    int j = 0;

    for (int i = 0; rny_string[i] != '\0'; ++i) {

        if (rny_string[i] == 'm') {
            p[j] = 'r';
            p[j+1] = 'n';
            j+=2;
        } else {
            p[j] = rny_string[i];
            ++j;
        }

    }

    p[total_length] = '\0';

    printf("string : %s\n", p);
    printf("total_length : %zu\n", total_length);

    printf("m num = %d\n", m_num);

}


int main (void) {

    calcaulate("mmm");

    char name [] = "hello-world";

    int index = 1;

    name[index+1] = 'K';

    printf("%s\n", name);


    return 0;
}