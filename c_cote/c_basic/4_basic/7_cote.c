// l로 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* myString) {
    
    size_t len = strlen(myString);
    
    char * p = (char *) malloc (len+1);
    
    p[len] = '\0';
    
    printf("l = %d\n", 'l');
    printf("a = %d\n", 'a');
    
    for (int i = 0; i < len; ++i) {
        if (myString[i] < 'l') {
            p[i] = 'l';
        } else {
            p[i] = myString[i];
        }
    }
    
    return p;
    
}

int main (void) {

    char name [] = "abcdevwxyz";

    char * p = solution(name);

    printf("p = %s\n", p);

    free(p);



    return 0;
}