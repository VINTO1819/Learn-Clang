/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 21일(월), "배열 - 기초 1"
*/

#include <stdio.h>

int main(void){
    //직접 일일히 선언
    int Metro_1th = 30; //1호차
    int Metro_2th = 12; //2호차
    int Metro_3th = 28; //3호차

    //배열로 선언
    int Metro[] = {30, 12, 28}; //한번에 선언 가능
    for(int i = 0; i < sizeof(Metro)/sizeof(int); i++){
        printf("There are %d people in %dth car\n", Metro[i], i + 1);
    }

    float FloatList[] = {1.0f, 5.2f, 3.14f};
    for(int i = 0; i < sizeof(FloatList)/sizeof(float); i++){
        printf("[%dth] %.2f\n", i + 1, FloatList[i]);
    }

    return 0;
}