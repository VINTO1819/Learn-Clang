/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 07일(월), "이중 반복문 - 피라미드를 쌓아라 프로젝트"
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원)

int main(void)
{
    SetConsoleOutputCP(65001); //한국어 사용

    int y, floor;
    scanf("%d", &floor);

    int x = floor - 1;
    for(y=0;y<floor;y++){
        int Xi;
        for(Xi=0; Xi < x; Xi++){ //앞 공백
            printf(" ");
        }
        for(Xi=0; Xi < (y * 2) + 1; Xi++){ //별
            printf("*");
        }

        x--; //공백 개수 줄이기
        printf("\n"); //개행
    }
    return 0;
}