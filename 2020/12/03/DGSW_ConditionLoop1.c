/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 03일(목), "반복문과 조건문 - 기초"
*/

#include <stdio.h>

int abs(int x){
    if(x > 0){
        return x;
    }else{
        return -x;
    }
}

int main(void){
    int Num1 = -50;
    printf("abs of %d is %d\n", Num1, abs(Num1));

    int score = 85;
    if(score >= 90){
        printf("Credit A");
    }else if(score >= 80){
        printf("Credit B");
    }else if(score >= 65){
        printf("Credit C");
    }else{
        printf("Credit D");
    }

    return 0;
}