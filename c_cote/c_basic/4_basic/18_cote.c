// 문자열 묶기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution_1(const char *strArr[], size_t strArr_len)
{

    int result = 0;

    int arr_1[strArr_len];

    for (int i = 0; i < strArr_len; ++i)
    {
        arr_1[i] = strlen(strArr[i]);
    }

    // 외부 for문은 선택정렬의 노드
    for (int i = 0; i < strArr_len - 1; ++i)
    {
        int temp = 0;
        for (int j = 1; j < strArr_len; ++j)
        {
            if (arr_1[i] == arr_1[j])
            {
                temp++;
            }
        }
        if (temp > result)
        {
            result = temp;
        }
    }

    return result;
}

int solution_2(const char *strArr[], size_t strArr_len)
{
    int cnts[31] = {0};

    for (int i = 0; i < strArr_len; i++)
    {
        int len = strlen(strArr[i]);
        cnts[len]++;
    }

    int max = 0;

    for (int i = 1; i <= 30; i++)
    {
        if (cnts[i] > max)
            max = cnts[i];
    }
    
    return max;
}

int main(void)
{

    const char *name[] = {"a", "bc", "d", "efg", "hi"};

    int result = solution_1(name, 5);

    printf("result = %d\n", result);

    return 0;
}