/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 08일(화), "기본 입출력 - Calculator"
*/

#include <stdio.h>
#include <windows.h>

#define true 1
#define false 0

#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원)

int main(void){
    SetConsoleOutputCP(65001); //한국어 사용
    printf("Calculator\n");

    char Operator;
    int A, B;
    while(true){
        int Result;
        scanf("%d %c %d", &A, &Operator, &B);
        switch(Operator){
            case '+' :
                Result = A + B;
                break;
            case '-' :
                Result = A - B;
                break;
            case '*' :
                Result = A * B;
                break;
            case '/' :
                Result = A / B;
                break;
            case '%' :
                Result = A % B;
                break;
        }
        if(Result != NULL){
            printf("%d %c %d = %d\n", A, Operator, B, Result);
        }else{
            printf("Invalid Value\n");
        }

        char CharCode;
        printf("Do you want to close this calculator(y/n) >");
        scanf(" %c", &CharCode);
        switch(CharCode){
            case 'y' :
                return 0;
                break;
            case 'n' :
                break;
            default :
                printf("Invalid Char\n");
        }

    }

    return 0;
}