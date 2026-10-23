// 정수 부분

// 실수 flo가 매개 변수로 주어질 때, flo의 정수 부분을 return하도록 solution 함수를 완성해주세요.
#include <stdio.h>

int soultion (double flo) {

    int answer = flo;
    printf("answer : %d\n", answer);
    return (int)flo;
}


int main (void) {

    int a = soultion(3.14234);
    printf("a : %d\n", a);
    return 0;
}


