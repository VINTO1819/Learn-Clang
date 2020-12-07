/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 07일(월), "이중 반복문 - 구구단"
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원)

int main(void)
{
    SetConsoleOutputCP(65001); //한국어 사용

    int N;//구구단 단수
    for(N=0;N < 9;N++){ //0~8 첫 반복
        printf("%d단 :\n", N + 1);
        int i;
        for(i=0;i < 9;i++){ //0~8 두번째 반복
            printf("  %d * %d = %d\n", N + 1, i + 1, (N + 1) * (i + 1));
        }
        printf("\n");
    }
    return 0;
}