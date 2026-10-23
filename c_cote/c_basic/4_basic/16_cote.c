#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int *solution_1(const char *intStrs[], size_t intStrs_len, int k, int s, int l)
{

    int arr_1[intStrs_len];

    int index = 0;

    for (int i = 0; i < intStrs_len; ++i)
    {
        char test[l];

        for (int j = s; j < s + l; ++j)
        {
            test[index] = intStrs[i][j];
            index++;
        }
        arr_1[i] = atoi(test);
        index = 0;
    }

    int total_index = 0;

    for (int i = 0; i < intStrs_len; ++i)
    {
        if (arr_1[i] > k)
        {
            total_index++;
        }
    }

    int *p = malloc(sizeof(int) * total_index);

    int index_2 = 0;

    for (int i = 0; i < intStrs_len; ++i)
    {
        if (arr_1[i] > k)
        {
            p[index_2] = arr_1[i];
            ++index_2;
        }
    }

    return p;
}

int *solution_2(const char *intStrs[], size_t intStrs_len, int k, int s, int l)
{

    printf("solution_2\n");

    int *answer = (int *)malloc(intStrs_len * sizeof(int));

    int cnt = 0;

    for (int i = 0; i < intStrs_len; i++)
    {
        char *ptr = &intStrs[i][s];
    
        int num = 0;

        for (int j = 0; j < l; j++)
        {
            num = 10 * num + (*ptr++ - '0');
        }
        if (num > k)
            answer[cnt++] = num;
    }

    answer = (int *)realloc(answer, cnt * sizeof(int));

    return answer;
}


int main (void) {

    const char * intStrs [] = {"0123456789", "9876543210", "9999999999999"};

    int * p = solution_2(intStrs, 3, 50000, 5, 5);

    for (int i = 0; i < 2; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    p = NULL;

    return 0;
}