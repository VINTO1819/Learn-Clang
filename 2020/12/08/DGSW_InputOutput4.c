/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 08일(화), "기본 입출력 - 구구단 중 특정 단수 출력하기"
*/

#include <stdio.h>
#include <windows.h>

#define true 1
#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원)

int main(void){
    SetConsoleOutputCP(65001); //한국어 사용

    while(true){
        int N, i;
        printf("단수를 입력하세요 >");
        scanf("%d", &N);
        printf("%d단 :\n", N);
        for(i=1;i< 10; i++){
            printf("  %d * %d = %d\n", N, i, N * i);
        }
        printf("\n");
    }


    return 0;
}