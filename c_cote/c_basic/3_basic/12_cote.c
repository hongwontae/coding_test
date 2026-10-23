// A 강조하기

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char* solution(const char* myString) {
    
    size_t len = strlen(myString);

    char * p = (char *) malloc (len+1);
    
    strcpy(p, myString);
    
    for (int i = 0; myString[i] != '\0'; ++i) {

        if (myString[i] == 'a') {
            p[i] = 'A';
        } else if (myString[i] != 'A' && isupper(myString[i])) {
            p[i] = tolower(myString[i]);
        }

    }

    return p;
}