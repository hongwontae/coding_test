// 부분 문자열 이어 붙여 문자열 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution_1(const char* my_strings[], size_t my_strings_len, int** parts, size_t parts_rows, size_t parts_cols) {
   
       
    char ** pp = (char **) malloc (sizeof(char *) * my_strings_len);
    
    int total_string_len = 0;
    
    for (int i = 0; i < my_strings_len; ++i) {
        int result = 0;
        result = parts[i][1] - parts[i][0] + 1;
        total_string_len+=result;
        pp[i] = (char *) malloc (result+1);
        pp[i][result] = '\0';

        
         int index_1 = parts[i][0];
        
         for (int j = 0; j < result; ++j) {
             pp[i][j] = my_strings[i][index_1]; 
             ++index_1;
         }
    }
    
    
     char * result_string = (char *) malloc (total_string_len+1);
    
    result_string[total_string_len] = '\0';
    
        int index_3 = 0;
        int index_4 = 0;
    
    for (int i = 0; i < my_strings_len; ++i) {
         size_t len = strlen(pp[i]);
        
        for (int j = 0; j < len; ++j) {
            result_string[index_3] = pp[index_4][j];
             index_3++;
         }
         index_4 += 1;
     }
    
    return result_string;
    
}


char* solution_2(const char* my_strings[], size_t my_strings_len,
               int** parts, size_t parts_rows, size_t parts_cols)
{
    // 1. 결과 문자열의 전체 길이 계산
    int total_len = 0;

    for (int i = 0; i < my_strings_len; i++) {
        int s = parts[i][0];
        int e = parts[i][1];

        total_len += e - s + 1;
    }

    // 2. 결과 문자열 공간 확보
    char* answer = malloc(total_len + 1);

    // 3. 필요한 문자들을 바로 복사
    int index = 0;

    for (int i = 0; i < my_strings_len; i++) {

        int s = parts[i][0];
        int e = parts[i][1];

        for (int j = s; j <= e; j++) {
            answer[index] = my_strings[i][j];
            index++;
        }
    }

    answer[index] = '\0';

    return answer;
}


int main (void) {


    const char * my_strings [] = {"progressive", "hamburger", "hammer", "ahocorasick"};

    int p0[] = {0, 4};
    int p1[] = {1, 2};
    int p2[] = {3, 5};
    int p3[] = {7, 7};


    int * parts[] = {p0, p1, p2, p3};

    char * result = solution_2(my_strings, 4, parts, 4, 2);

    printf("result = %s\n", result);

    free(result);

    result = NULL;

    return 0;
}