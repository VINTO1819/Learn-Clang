/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 22일(화), "다차원 배열 - 기초 1"
*/

#include <stdio.h>

int main(void){
    int gugudan[10][10];
    for(int y=1; y<10; y++){
        for(int x=1; x<10; x++){
            gugudan[y][x] = y * x;
            printf("%d * %d = %d\n", y, x, gugudan[y][x]);
        }
    }
    return 0;
}