// 공배수

// 정수 number와 n, m이 주어집니다.
// number가 n의 배수이면서 m의 배수이면 1을 아니라면 0을 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    int result = number % n == 0 && number % m == 0;
    
    return result;
}


int main (void) {


    int result = solution(10, 2, 3);

    printf("공배수 판정 결과 : %d\n", result);


    return 0;
}