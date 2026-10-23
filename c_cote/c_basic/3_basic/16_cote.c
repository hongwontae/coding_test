// 5명씩

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char** solution( char* names[], size_t names_len)
{
    size_t num_1 = names_len / 5;

    if (names_len % 5 != 0) {
        ++num_1;
    }

    char** pp = malloc(sizeof(char*) * num_1);

    for (size_t i = 0; i < num_1; ++i) {
        size_t index = i * 5;
        size_t len = strlen(names[index]);

        pp[i] = malloc(len + 1);
        strcpy(pp[i], names[index]);
    }

    return pp;
}


int main () {


    char * names [] = {"nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"};
    size_t length = 7;

    char ** pp = solution(names, length);

    printf("pp[0] : %s\n", pp[0]);
    printf("pp[1] : %s\n", pp[1]);


    return 0;

}