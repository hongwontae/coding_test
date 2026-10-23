// 배열 만들기 2

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution_1(int l, int r, int * length) {
    
    int count = 0;
    
    for (int i = l; i <= r; ++i) {
        char name [7];
        
        sprintf(name, "%d", i);
        
        if (strcmp(name, "0") == 0) {
            continue;
        }
        
        if (strspn(name, "05") == strlen(name)) {
            count++;
        }
        
    }
    
    if (count == 0) {
        int * p = malloc(sizeof(int));
        p[0] = -1;
        return p;
    }

    *length = count;
    
    int * p = malloc(sizeof(int) * count);
    
    int index_1 = 0;
    
    for (int i = l; i <= r; ++i) {
        char name [7];
        
        sprintf(name, "%d", i);
        
        if (strcmp(name, "0") == 0) {
            continue;
        }
        
        if (strspn(name, "05") == strlen(name)) {

            p[index_1] = atoi(name);
            index_1++;
        }
        
    }
    
    
    return p;
    
}

int IsOk(int num) {
    while(num) {
        int a = num % 10;
        num /= 10;
        if(a == 0 || a == 5) continue;
        return 0;
    }
    return 1;
}

int* solution_2(int l, int r, int * length) {
    // 최대 0과 5로만 들어갈 수 있는 개수만큼 동적할당
    int* answer = (int*)malloc(64 * sizeof(int));

    int cnt = 0;

    for(int num = l; num <= r; num++) {
        if(IsOk(num)) answer[cnt++] = num;
    }

    if(!cnt) {
        answer[0] = -1;
        cnt = 1;
    } 

    *length = cnt;

    answer = (int*)realloc(answer, cnt * sizeof(int));

    return answer;
}


int main (void) {

    int l = 5;
    int r = 555;

    int length = 0;

    int * p = solution_2(l, r, &length);

    for (int i = 0; i <length; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    p = NULL;

    return 0;
    


}