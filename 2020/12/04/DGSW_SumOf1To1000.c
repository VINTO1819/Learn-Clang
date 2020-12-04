/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 04일(금), "반복문과 조건문 - 1부터 1000까지 더하기"
*/


#include <stdio.h>

int main(void)
{
    int Result = 0;
    int i;
    for(i=0;i<1000;i++){
        Result += i + 1; //차례대로 더하기(다만 i가 0부터 시작하므로, i + 1을 대입해야 함!)
    }

    printf("Result is %d!", Result);
    
    return 0;
}