// 배열에서 문자열 대소문자 변환하기

// 문자열 배열 strArr가 주어집니다. 모든 원소가 알파벳으로만 이루어져 있을 때,
//  배열에서 홀수번째 인덱스의 문자열은 모든 문자를 대문자로, 짝수번째 인덱스의 문자열은 모든 문자를 소문자로 바꿔서 반환하는 solution 함수를 완성해 주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char** solution(const char* strArr[], size_t strArr_len)
{
    // 문자열 포인터를 저장할 배열
    char** answer = malloc(sizeof(char*) * strArr_len);

    for (size_t i = 0; i < strArr_len; i++) {

        // 문자열 하나를 저장할 공간
        size_t length = strlen(strArr[i]);
        
        // 
        answer[i] = malloc(length + 1);

        // 원본 문자열 복사
        strcpy(answer[i], strArr[i]);

        // 짝수 인덱스 → 소문자
        // 홀수 인덱스 → 대문자
        for (size_t j = 0; j < length; j++) {

            if (i % 2 == 0) {
                answer[i][j] = tolower(answer[i][j]);
            }
            else {
                answer[i][j] = toupper(answer[i][j]);
            }
        }
    }

    return answer;
}