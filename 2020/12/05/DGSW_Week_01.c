/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 05일(토), "주간 과제 - 특정 자연수 이하의 수들 중 특정 배수의 값들의 합 구하기"
*/

#include <stdio.h>

int main(void){
    /*
        조건 :
          * 자연수 N은 1000 이하이다.
          * 자연수 N 이하인 수들 중에서 3의 배수와 5의 배수인 것들의 합을 구하여라.
    */
    
    int Result = 0; //답 선언
    int N; //입력값 N
    scanf("%d", &N); //N 입력받기

    int i = 0; //반복문을 위해 i 선언
    for(i = N; i > 0; i--){ //N부터 0까지 계속 반복
        if(i % 3 == 0 || i % 5 == 0) //i가 3이나 5로 나누어떨어질 때
            Result += i; //값을 Result에 추가
    }

    printf("%d", Result); //답 출력

    return 0;
}