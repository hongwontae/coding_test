// 정수를 나선형으로 배치하기

#include <stdio.h>
#include <stdlib.h>

int** solution(int n) {

    int** answer = malloc(sizeof(int*) * n);

    for (int i = 0; i < n; i++) {
        answer[i] = calloc(n, sizeof(int));
    }

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;
    
    int num = 1;

    while (top <= bottom && left <= right) {

        // 오른쪽
        for (int j = left; j <= right; j++)
            answer[top][j] = num++;
        top++;

        // 아래쪽
        for (int i = top; i <= bottom; i++)
            answer[i][right] = num++;
        right--;

        // 왼쪽
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                answer[bottom][j] = num++;
            bottom--;
        }

        // 위쪽
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                answer[i][left] = num++;
            left++;
        }
    }

    return answer;
}


int main (void) {

    int ** pp = solution(5);

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("pp[%d][%d] = %d\t", i, j, pp[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; ++i) {
        free(pp[i]);
    }

    free(pp);

    pp = NULL;


    return 0;
}