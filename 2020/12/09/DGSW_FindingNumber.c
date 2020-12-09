/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 09일(수), "분기문 - 숫자찾기 up down 실습"
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#pragma execution_character_set("utf-8") //한국어 사용가능

int main(void){
    SetConsoleOutputCP(65001); //한국어 사용

    //랜덤한 수 구하기
    int n = (rand() % 99) + 1;
    int input;
    while(1){ //별도로 break가 나올 때까지 무한반복
        printf("숫자 입력(1~99) >");
        scanf("%d", &input);
        if(input == n){
            printf("정답입니다!\n");
            break;
        }else if(input < n){ //입력값이 n보다 작을 때
            printf("%d는 숫자보다 작습니다!\n", input);
        }else{ //입력값이 n보다 클 때
            printf("%d는 숫자보다 큽니다!\n", input);
        }
    }

    return 0;
}