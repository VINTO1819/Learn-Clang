/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    11월 30일(월), "변수와 상수 - 활용 및 계산"
*/

#include <stdio.h>
#include <limits.h>

int main(void){
    int a = 10;
    int b = 20;
    
    printf("When a is %d and b is %d :\n", a, b);

    printf("%d + %d is %d\n", a, b, a + b);
    printf("%d - %d is %d\n", a, b, a - b);
    printf("%d * %d is %d\n", a, b, a * b);
    printf("%d / %d is %d\n", a, b, a / b);
    printf("%d %% %d is %d\n", a, b, a % b);

    return 0;
}
