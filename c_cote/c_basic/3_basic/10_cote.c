// 공백으로 구분하기

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ** solution_1(const char* my_string) {
    
    if (strstr(my_string, " ") == NULL) {
        char ** pp = (char **) malloc (sizeof(char *) * 1);
        size_t len = strlen(my_string);
        pp[0] = (char *) malloc(len+1);
        strcpy(pp[0], my_string);
        return pp;
    }
    
    int index = 0;
    size_t len = strlen(my_string);
    
    char copy_data [len+1];
    strcpy(copy_data, my_string);
    char * saveper_1;
    
    char * token_1 = strtok_r(copy_data, " ", &saveper_1);
    
    while (token_1 != NULL) {
        index++;
        token_1 = strtok_r(NULL, " ", &saveper_1);
    }
    
    char ** pp = (char **) malloc (sizeof(char *) * index);
    
    char copy_data_2 [len+1];
    strcpy(copy_data_2, my_string);
    
    int index_2 = 0;
    char * saveper_2;
    char * token_2 = strtok_r(copy_data_2, " ", &saveper_2);
    
    while (token_2 != NULL) {
        size_t len = strlen(token_2);
        pp[index_2] = (char *) malloc (sizeof(char) * (len + 1));
        strcpy(pp[index_2], token_2);
        ++index_2;
        token_2 = strtok_r(NULL, " ", &saveper_2);
    }
    
    return pp;
    
}


char ** solution_2 (const char* my_string, int * leng) {

    int count = 1;
    int index = 0;

    while (my_string[index] != '\0') {
        if (my_string[index] == ' ') {
            ++count;
        }
        ++index;
    }

    char ** pp = (char **) malloc (sizeof(char *) * count);
    *leng = count;

    size_t len = strlen(my_string);
    char copy_data [len+1];
    strcpy(copy_data, my_string);

    char * saveper;
    char * token = strtok_r(copy_data, " ", &saveper);
    int index_2 = 0;

    while (token != NULL) {
        size_t len = strlen(token);
        pp[index_2] = (char *) malloc (len+1);
        strcpy(pp[index_2], token);
        index_2++;
        token = strtok_r(NULL, " ", &saveper);
    }

    return pp;


}



int main (void) {

    char my_string [] = "i love you";


    int length = 0;
    char ** pp = solution_2(my_string, &length);

    for (int i = 0; i < length; ++i) {
        printf("pp[%d] : %s\n", i, pp[i]);
    }
    


    return 0;
}