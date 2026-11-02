// 진료 순서 정하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int emergency[], size_t emergency_len) {

    int* answer = malloc(sizeof(int) * emergency_len);

    for (int i = 0; i < emergency_len; ++i) {

        int rank = 1;

        for (int j = 0; j < emergency_len; ++j) {

            if (emergency[i] < emergency[j]) {
                rank++;
            }
        }

        answer[i] = rank;
    }

    return answer;
}

int main (void) {

    int emergency[] = {3, 76, 24};
    size_t emergency_len = sizeof(emergency) / sizeof(emergency[0]);

    int* answer = solution(emergency, emergency_len);
    for (int i = 0; i < emergency_len; ++i) {
        printf("%d ", answer[i]);
    }
    free(answer);   


    return 0;
}