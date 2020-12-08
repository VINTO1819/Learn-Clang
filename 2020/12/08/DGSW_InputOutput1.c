/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 08일(화), "기본 입출력 - 기초"
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원)

int main(void)
{
    SetConsoleOutputCP(65001); //한국어 사용

    int X; //정수 변수
    int* AddressOfX = NULL; //정수 포인터 변수
    AddressOfX = &X; //X의 주소값을 AddressOfX에 대입
    
    /*
        두 함수 모두 동일 :
        scanf("%d", &X);
        scanf("%d", AddressOfX);
    */

    scanf("%d", &X);
    printf("X is %d", X);

    return 0;
}