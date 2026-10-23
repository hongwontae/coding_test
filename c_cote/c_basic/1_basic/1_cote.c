
// 알파벳으로 이루어진 문자열 myString이 주어집니다. 모든 알파벳을 대문자로 변환하여 return 하는 solution 함수를 완성해 주세요.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main (void) {

    char name [20];

    printf("문자열을 입력해주세요\n");

    scanf("%s", name);

    printf("모든 문자열을 대문자로 만들겠습니다.\n");

    size_t string_size = strlen(name);

    char * p = (char *) malloc(string_size+1);

    for (int i = 0; i < string_size; ++i) {
        p[i] = toupper(name[i]);
    }


    p[string_size] = '\0';

    printf("%s\n",p);
    printf("string size = %zu\n", string_size);
    
    free(p);

    return 0;
}