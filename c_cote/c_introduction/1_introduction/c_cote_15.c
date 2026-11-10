#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

long long solution_1(const char* numbers) {
    long long answer = 0;
    
    char number_set[50];
    
    int i_1 = 0;
    int i_2 = 0;
    
    while (numbers[i_1] != '\0') {
        
        if (numbers[i_1] == 'o' && numbers[i_1+1] == 'n') {
            number_set[i_2] = '1';
            i_2++;
            i_1+=3;
            continue;
        } else if (numbers[i_1] == 't' && numbers[i_1+1] == 'w') {
            number_set[i_2] = '2';
            i_2++;
            i_1+=3;
            continue;
        } else if (numbers[i_1] == 't' && numbers[i_1+1] == 'h') {
            number_set[i_2] = '3';
            i_2++;
            i_1+=5;
            continue;
        } else if (numbers[i_1] == 'f' && numbers[i_1+1] == 'o') {
            number_set[i_2] = '4';
            i_2++;
            i_1+=4;
            continue;
        } else if (numbers[i_1] == 'f' && numbers[i_1+1] == 'i') {
            number_set[i_2] = '5';
            i_2++;
            i_1+=4;
            continue;
        } else if (numbers[i_1] == 's' && numbers[i_1+1] == 'i') {
            number_set[i_2] = '6';
            i_2++;
            i_1+=3;
            continue;
        } else if (numbers[i_1] == 's' && numbers[i_1+1] == 'e') {
            number_set[i_2] = '7';
            i_2++;
            i_1+=5;
            continue;
        } else if (numbers[i_1] == 'e' && numbers[i_1+1] == 'i') {
            number_set[i_2] = '8';
            i_2++;
            i_1+=5;
            continue;
        } else if (numbers[i_1] == 'n' && numbers[i_1+1] == 'i') {
            number_set[i_2] ='9';
            i_2++;
            i_1+=4;
            continue;
        } else if (numbers[i_1] == 'z' && numbers[i_1+1] == 'e') {
            number_set[i_2] = '0';
            i_2++;
            i_1+=4;
        }
        
    }
    
    number_set[i_2] = '\0';
    
    answer = atoll(number_set);
    
    return answer;
}



long long solution_2(const char* numbers) {
    
    long long answer = 0;
    
    char * word [] = {
        "zero" , "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    
    int index = 0;
    
    while (numbers[index] != '\0') {
        
        for (int j = 0; j < 10; ++j) {
            
            size_t len = strlen(word[j]);
            
            if (strncmp(numbers + index, word[j], len) == 0) {
                
              answer = answer * 10 + j;
                index += len;

                break;
            }
            
        } 
        
        
    }
    
    return answer;
}

int main (void) {

    long long result = solution_2("onetwothreefourfivesixseveneightnine");

    printf("result = %lld\n", result);


    return 0;
}