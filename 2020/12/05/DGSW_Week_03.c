/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 05일(토), "주간 과제 - 초를 hhmmss로 변환"
*/

#include <stdio.h>

int main(void){
    /*
        조건 :
          * int형으로 초를 입력받으면 "h-시, m-분, s-초"로 출력한다.
    */
    
    int inputSecond; //입력받을 초
    scanf("%d", &inputSecond);

    int hh, mm, ss; //hh, mm, ss
    hh = inputSecond / (60 * 60 * 1); //초를 1시간(1 * 60초  * 60분)으로 나눔
    inputSecond %= (60 * 60 * 1); //나머지 구하기
    mm = inputSecond / (60 * 1); //초를 1분(1 * 60초)로 나눔
    inputSecond %= (60 * 1); //나머지 구하기
    ss = inputSecond; //나머지 모조리 대입

    printf("h-%d, m-%d, s-%d", hh, mm, ss);

    return 0;
}