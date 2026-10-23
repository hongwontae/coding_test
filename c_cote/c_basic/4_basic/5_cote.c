// 콜라츠 수열 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int * solution_1(int n, int * address) {
    
    int len = 0;
    
    int number = n;
    
    while (true) {
        if (number == 1) {
            ++len;
            break;
        }
        
        if (number % 2 == 0) {
            number/=2;
            ++len;
        } else {
            number = 3 * number +1;
            ++len;
        }
        
    }

    *address = len;
    
    
    int * p = (int *) malloc (sizeof(int) * len);
    
    int number_2 = n;
    int index = 0;
    
    while (true) {
        
        if (number_2 == 1) {
            p[index] = number_2;
            break;
        }
        
        if (number_2 % 2 == 0) {
            p[index] = number_2;
            number_2 /=2;
            ++index;
        } else {
            p[index] = number_2;
            number_2 = 3 * number_2 +1;
            ++index;
        }
        
    }
    
    
    
    return p;
        
}

int * solution_2 (int n, int * address) {

    int number_1 = n;
    int len = 0;

    while (true) {
        if (number_1 == 1) {
            len++;
            break;
        }

        if (number_1 % 2 == 0) {
            number_1/=2;
            ++len;
        } else {
            number_1 = number_1 * 3 +1;
            ++len;
        }
    }

    int * p = (int *) malloc (sizeof(int) * len);
    *address = len;

    p[0] = n;

    int number_2 = n;
    int index = 1;

    while (number_2 != 1) {

        if (number_2 % 2 == 0) {
            number_2/=2;
        } else {
            number_2 = number_2 * 3 + 1;
        }

        p[index] = number_2;
        index++;
    }

    return p;

}


int main (void) {

    int address = 0;
    int * p = solution_1(10, &address);
    
    for (int i = 0; i < address; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    return 0;


}