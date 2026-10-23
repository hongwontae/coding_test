// 순서쌍의 개수 -> 공약수 알고리즘

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    
    int count = 0;
    
    for (int i = 1; i <=n; ++i) {
        
        if (n % i == 0) {
            count++;
        }
        
    }
    
    return count;
}


int main (void) {

    int count = solution(20);

    printf("count = %d\n", count);


    return 0;
}

