// 배열 비교하기

// 이 문제에서 두 정수 배열의 대소관계를 다음과 같이 정의합니다.

// 두 배열의 길이가 다르다면, 배열의 길이가 긴 쪽이 더 큽니다.
// 배열의 길이가 같다면 각 배열에 있는 모든 원소의 합을 비교하여 다르다면 더 큰 쪽이 크고, 같다면 같습니다.
// 두 정수 배열 arr1과 arr2가 주어질 때,
// 위에서 정의한 배열의 대소관계에 대하여 arr2가 크다면 -1, arr1이 크다면 1, 두 배열이 같다면 0을 return 하는 solution 함수를 작성해 주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    
    if (arr1_len > arr2_len) {
        return 1;
    } else if (arr2_len > arr1_len) {
        return -1;
    } else {
        int result1 = 0;
        int result2 = 0;
        
        for (int i = 0; i < arr1_len; ++i) {
            result1+=arr1[i];
        }
        
        for (int i = 0; i < arr1_len; ++i) {
            result2+=arr2[i];
        }
        
        return result1 > result2 ? 1 : result2 > result1 ? -1 : 0;
    }
    
    
}


int main (void) {

    int arr1 [] = {100, 17, 84, 1};
    int arr2 [] = {55, 12, 65, 36};

    size_t arr1_len = sizeof(arr1) / sizeof(arr1[0]);
    size_t arr2_len = sizeof(arr2) / sizeof(arr2[0]);

    int result = solution(arr1, arr1_len, arr2, arr2_len);

    printf("result = %d\n", result);


    return 0;
}

