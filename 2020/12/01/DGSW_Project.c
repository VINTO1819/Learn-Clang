/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 01일(화), "프로젝트 - 조서 쓰기"
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원) - 근데 차피 아스키밖에 지원 안해서 소용없..

//문자열 입력받기
void Input_String(char* InputText, char Variable[]){
    printf("%s >", InputText);
    scanf("%s", Variable, sizeof(Variable));
}

//정수 입력받기
void Input_Number(char* InputText, int* Variable){
    printf("%s >", InputText);
    scanf("%d", Variable);
}

//실수 입력받기
void Input_Float(char* InputText, float* Variable){
    printf("%s >", InputText);
    scanf("%f", Variable);
}

int main(void){
    SetConsoleOutputCP(65001); //한국어 사용가능(어차피 입력은 한국어로 하면 안통함)

    char Name[128];
    int Age;
    float Height;
    float Weight;
    char WhatYouDid[512];

    Input_String("What is your name?", Name);
    Input_Number("How old are you?", &Age);
    Input_Float("How tall is your height in cm?", &Height);
    Input_Float("How heavy is your Weight in kg?", &Weight);
    Input_String("What you did?", WhatYouDid);

    printf("NAME : %s\nAge : %d\nHeight : %.1fm\nWeight : %.1fkg\nCriminal : %s", Name, Age, Height / 100, Weight, WhatYouDid);
    
    return 0;
}