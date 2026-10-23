// 홀짝 구분하기

// 자연수 n이 입력으로 주어졌을 때 만약 n이 짝수이면 "n is even"을, 홀수이면 "n is odd"를 출력하는 코드를 작성해 보세요.

#include <stdio.h>


int main (void) {

    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is oven\n", n);
    } else {
        printf("%d is odd\n", n);
    }


    return 0;

}