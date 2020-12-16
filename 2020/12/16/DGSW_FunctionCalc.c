/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 16일(수), "함수 - 반환값이 있는 함수"
*/

#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int div(int a, int b){
    return a / b;
}

int mul(int a, int b){
    return a * b;
}

int lft(int a, int b){
    return a % b;
}

//메인함수
int main(void){
    int val1 = 7, val2 = 3;
    printf("%d + %d = %d\n", val1, val2, sum(val1, val2));
    printf("%d - %d = %d\n", val1, val2, sub(val1, val2));
    printf("%d * %d = %d\n", val1, val2, mul(val1, val2));
    printf("%d / %d = %d\n", val1, val2, div(val1, val2));
    printf("%d %% %d = %d\n", val1, val2, lft(val1, val2));

    return 0;
}