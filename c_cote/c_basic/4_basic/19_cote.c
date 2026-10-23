// 수열과 구간 쿼리2

#include <stdio.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = malloc(sizeof(int) * queries_rows);

    for (int q = 0; q < queries_rows; q++) {
        int s = queries[q][0];
        int e = queries[q][1];
        int k = queries[q][2];

        int min = -1;

        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                if (min == -1 || arr[i] < min) {
                    min = arr[i];
                }
            }
        }

        answer[q] = min;
    }

    return answer;
}