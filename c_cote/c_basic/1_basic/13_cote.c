// flag에 따라 다른 값 반환하기

// 두 정수 a, b와 boolean 변수 flag가 매개변수로 주어질 때, 
// flag가 true면 a + b를 false면 a - b를 return 하는 solution 함수를 작성해 주세요.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calculate (int a, int b, bool flag){

    if (flag) {
        return a+b;
    } else {
        return a-b;
    }

    // return flag ? a+b : a-b;

}


int main (void) {

    int value = calculate(10, 20, false);

    printf("value : %d\n", value);

    return 0;
}