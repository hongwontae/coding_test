// 문자 개수 세기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int* solution_1(const char* my_string) {
    
    size_t str_len = strlen(my_string);
    
    int * p = (int *) calloc(52, sizeof(52));
    
    for (int i = 0; i < str_len; ++i) {
        if (my_string[i] >= 65 && my_string[i] <=90) {
            int range = my_string[i]-65;
            p[range] +=1;
        } else {
            int range = my_string[i]-97+26;
            printf("range = %d\n", range);
            
            p[range] +=1;
        }
        
    }
    
    return p;
    
}

int* solution_2(const char* my_string) {

    int* answer = (int*) malloc(52 * sizeof(int));

    int cnt = 0;

    int cnts[128] = { 0 };

    
    char* ptr = my_string - 1;

    // ptr은 다음 주소 + 역참조
    // 역참조 문자 -> 정수 cnts[65]++; -> cnts[65] 공간에 +
    // 그러면 ASCII 정수에 그대로 들어감
    while(*++ptr) {
        cnts[*ptr]++;
    }

    // A ~ Z까지 돌립니다. 이 떄 cnt는 0 단항 증가 연산자로 0, 1, 2 이렇게 증가합니다.
    // cnts[i]에 접근해서 그대로 값을 넣습니다. -> 자동으로 인덱스는 계산됩니다.
    for(int i = 'A'; i <= 'Z'; i++) 
        answer[cnt++] = cnts[i];

    for(int i = 'a'; i <= 'z'; i++) 
        answer[cnt++] = cnts[i];

    return answer;
}