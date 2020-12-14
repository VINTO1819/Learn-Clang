/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 14일(월), "함수 - 나도코딩 함수계산기"
*/

#include <stdio.h>

//계산기 함수
int sum(int a ,int b){
    return a + b;
}

int minus(int a ,int b){
    return a - b;
}

//숫자 출력
void printn(int val){
    printf("number is %d\n", val);
}

//메인함수
int main(void){
    int num = 2;
    printn(sum(num, 5)); //2 + 5
    printn(minus(num, 1)); //2 - 1


    return 0;
}