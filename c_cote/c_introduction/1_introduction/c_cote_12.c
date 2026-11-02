#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* letter) {

    char* morse[] = {
        ".-","-...","-.-.","-..",".","..-.",
        "--.","....","..",".---","-.-",".-..",
        "--","-.","---",".--.","--.-",".-.",
        "...","-","..-","...-",".--","-..-",
        "-.--","--.."
    };

    char* answer = malloc(strlen(letter) + 1);
    char* copy = malloc(strlen(letter) + 1);

    strcpy(copy, letter);

    int index = 0;

    char* token = strtok(copy, " ");

    while (token != NULL) {

        for (int i = 0; i < 26; ++i) {

            if (strcmp(token, morse[i]) == 0) {
                answer[index++] = 'a' + i;
                break;
            }
        }

        token = strtok(NULL, " ");
    }

    answer[index] = '\0';

    free(copy);

    return answer;
}