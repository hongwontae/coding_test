#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution_1(int a, int b) {

    int case_1;
    int case_2 = 2 * a *b ;
    
    if (b < 10) {
        a *=10;
    } else if (b < 100) {
        a *=100;
    } else if (b < 1000){
        a *= 1000;
    } else {
        a *= 10000;
    }
    
    case_1 = a+b;
    
    return case_1 > case_2 ? case_1 : case_2 > case_1 ? case_2 : case_1;
    
}

int solution_2(int a, int b) {
    int case_1;
    
    char str [20];
    
    sprintf(str, "%d%d", a, b);
    
    case_1 = atoi(str);
    
    int case_2 = 2 * a * b;
    
    return case_1>case_2 ? case_1 : case_2>case_1 ? case_2 : case_1;
    

}

int main () {
    int result = solution_2(10, 20);
    printf("result : %d\n", result);

    return 0;
}