// 주사위 게임 2

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

unsigned int solution(int a, int b, int c) {
    
    unsigned int result = 0;
    
    if (a != b && b != c && a != c) {
        result = a + b + c;
        return result;
    } else if (a == b && b == c && a == c) {
        result = (a+b+c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
        return result;
    } else {
        result = (a+b+c) * (a*a + b*b + c*c);
        return result;
    }
    
}



int main (void) {


    unsigned int result = solution(10, 10, 10);

    printf("result = %d\n", result);


    return 0;
}


