// 문자열 my_string과 정수 k가 주어질 떄, my_string을 k번 반복한 문자열을 return하는 main 함수를 작성해 주세요
// "string" | 3 -> "stringstringstring"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char name [] = "Hello-World ";
    int repeat = 4;

    size_t original_name_length = strlen(name);

    size_t total_name_length = strlen(name) * repeat;

    printf("original : %zu\n", original_name_length);
    printf("total : %zu\n", total_name_length);

    
    char total_name [total_name_length+1];

    // 이중 for 문 작업

    int index = 0;

    for (int i = 0; i < repeat; i++) {
        for (int j = 0; name[j] != '\0'; j++) {
            total_name[index] = name[j];
            ++index;
        }
    }

    total_name [index] = '\0';
    // total_name [total_name_length+1] = '\0';

    printf("total_name : %s\n", total_name);

    return 0;

}