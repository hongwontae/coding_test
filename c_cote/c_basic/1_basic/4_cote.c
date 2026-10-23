// 홀짝에 따라 다른 값 반환하기
// 양의 정수 n이 매개변수로 주어질 때, n이 홀수라면 n 이하의 홀수인 모든
// 양의 정수의 합을 return 하고 n이 짝수라면 n 이하의 짝수인 모든 양의 정수의 제곱의 
// 합을 return 하는 solution 함수를 작성해 주세요.

#include <stdio.h>

int calculate(int n)
{

    int k = 0;

    if (n % 2 == 0)
    {

        for (int i = n; i >= 0; i -= 2)
        {
            k += i * i;
        }
    }
    else
    {
        for (int i = n; i >= 0; i -= 2)
        {
            k += i;
        }
    }

    return k;
}

int main(void)
{
    int number_1 = 10;
    int number_2 = 19;

    int a = calculate(number_1);
    int b = calculate(number_2);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}