/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 07일(월), "이중 반복문 - 거꾸로 별"
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원)

int main(void)
{
    SetConsoleOutputCP(65001); //한국어 사용

    int y, size;
    scanf("%d", &size);
    for(y=0;y<size;y++){
        int i1, i2;
        for(i1=0;i1 < (size - y) + 1;i1++){ //y의 크기와 x의 크기는 같아야 하므로, y 개수를 제외한 모든 사이즈를 공백으로 채움
            printf(" ");
        }
        for(i2=0;i2 < y + 1;i2++){ //나머지는 별로 채움
            printf("*");
        }

        printf("\n"); //개행
    }
    return 0;
}