#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution_1(const char *s)
{

    size_t len = strlen(s);
    char *copy_data = malloc(len + 1);
    strcpy(copy_data, s);

    int result = 0;
    int previous_value = 0;

    char *token = strtok(copy_data, " ");

    while (token != NULL)
    {
        if (token[0] == 'Z')
        {
            result -= previous_value;
        }
        result += atoi(token);
        previous_value = atoi(token);

        token = strtok(NULL, " ");
    }

    free(copy_data);

    return result;
}

// 스택으로 구현하기
int solution_2(const char *s)
{

    size_t len = strlen(s);
    char copy_data[len + 1];
    strcpy(copy_data, s);

    int stack[200];
    int top = 0;

    int result = 0;

    char *token = strtok(copy_data, " ");

    while (token != NULL)
    {

        if (strcmp(token, "Z") == 0)
        {
            if (top > 0)
            {
                top--;
            }
        }
        else
        {
            int value = atoi(token);
            stack[top++] = value;
        }

        token = strtok(NULL, " ");
    }

    for (int i = 0; i < top; ++i)
    {
        result += stack[i];
    }

    return result;
}

int main(void)
{

    char name[] = "10 Z 20 Z";

    int a = solution_1(name);

    printf("a = %d\n", a);

    return 0;
}