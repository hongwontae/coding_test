// 문자 리스트를 문자열로 변환하기
// 문자들이 담겨있는 배열 arr가 주어집니다. arr의 원소들을 순서대로 이어 붙인 문자열을 return 하는 solution함수를 작성해 주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int arr_len = 3;

    char *arr [] = {"Hong", "KKKK", "koALA3121"};


    int total_length = 0;
    
    for (int i = 0; i < arr_len; i++) {
        total_length += strlen(arr[i]);
    }

    printf("total_length %d\n", total_length);
    
    char * p = (char *) malloc (total_length+1);
    
    int index = 0;
    
    for (int i = 0; i < arr_len; i++) {
        for (int j = 0; arr[i][j] != '\0'; j++) {
            p[index] = arr[i][j];
            index++;
        }
    }
    
    p[total_length] = '\0';
    
    printf("p strig : %s\n", p);
    
    return 0;
}