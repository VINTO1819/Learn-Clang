/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 07일(월), "이중 반복문 - 이중 반복문 파해치기"
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원)

int main(void)
{
    SetConsoleOutputCP(65001); //한국어 사용

    int y, height;
    scanf("%d", &height);
    for(y=0;y<height;y++){
        int i;
        for(i=0;i<y + 1;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}