/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 16일(수), "함수 - 반환값이 있는 함수"
*/

#include <stdio.h>

int function(){
    return 2020;
}

//반환값과 전달값이 있는 함수
int funcWithArg(int a){
    return a + 10;
}

//전달값이 없는 함수
int funcWithoutArg(){
    return 2077;
}

//메인함수
int main(void){
    printf("%d", function()); //반환값이 있음

    return 0;
}