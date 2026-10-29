// 숨어있는 숫자의 덧셈

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

int solution_1(const char* my_string) {

    int answer = 0;
    int i = 0;
    int j = 0;
    
    while (my_string[i] != '\0') {
        
        char arr [5] = {0};
        
        while (isdigit(my_string[i])) {
            arr[j] = my_string[i];
            ++j;
            ++i;
        }

        if (j != 0) {
            arr[j] = '\0';
        }
        
        if (arr[0] != 0) {
            answer += atoi(arr);
        }
        
        
        ++i;
        j = 0;
    }
    
    return answer;
}

int solution_2(const char* my_string) {
    int answer = 0;
    int number = 0;
    int i = 0;

    while (my_string[i] != '\0') {
        if (isdigit((unsigned char)my_string[i])) {
            number = number * 10 + (my_string[i] - '0');
        } else {
            answer += number;
            number = 0;
        }

        ++i;
    }

    printf("answer = %d\n", answer);

    answer += number;

    return answer;
}

int main (void) {


    int a = solution_2("a1b2333kks2");

    printf("a = %d\n", a);

    return 0;
}