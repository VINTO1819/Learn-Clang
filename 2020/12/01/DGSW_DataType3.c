/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 01일(화), "자료형 3 - Type Converting in printf"
*/

#include <stdio.h>

int main(void){
    int x = 100;

    printf("%d\n", x); //10진수
    printf("%o\n", x); //8진수
    printf("%x\n", x); //16진수

    return 0;
}