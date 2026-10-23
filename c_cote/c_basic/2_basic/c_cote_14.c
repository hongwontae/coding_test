// 더 크게 합치기

// 연산 ⊕는 두 정수에 대한 연산으로 두 정수를 붙여서 쓴 값을 반환합니다. 예를 들면 다음과 같습니다.

// 12 ⊕ 3 = 123
// 3 ⊕ 12 = 312
// 양의 정수 a와 b가 주어졌을 때, a ⊕ b와 b ⊕ a 중 더 큰 값을 return 하는 solution 함수를 완성해 주세요.

// 단, a ⊕ b와 b ⊕ a가 같다면 a ⊕ b를 return 합니다.

// sprintf() -> 자동으로 널 문자를 추가해줍니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(int a, int b) {
    
    char name_1 [20];
    char name_2 [20];
    
    sprintf(name_1, "%d%d", a,b);
    sprintf(name_2, "%d%d", b,a);
    
    int case_1 = atoi(name_1);
    int case_2 = atoi(name_2);
    
    return case_1 > case_2 ? case_1 : case_2;
    
}


int main (void) {


    int value = solution(3, 19);

    printf("value : %d\n", value);

    return 0;   
}