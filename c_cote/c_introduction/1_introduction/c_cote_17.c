// 구슬을 나누는 경우의 수

#include <stdio.h>

long long int solution (int balls, int share) {

    long long int result = 1;

    for (int i = 1; i <= share; ++i) {
        result = result * (balls - i + 1) / i;
    }


    return result;
}


int main (void) {

    long long int result = solution(10, 3);

    printf("result = %lld\n", result);

    return 0;

}