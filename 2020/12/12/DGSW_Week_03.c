/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 12일(토), "주간 과제 - 이중반복문 3"
*/

#include <stdio.h>

int main(void){
    /*
        조건 :
          * 숫자 N이 주어진다
          * 숫자 N을 크기로 하는 패턴을 출력하라
    */
    
    int N; //입력값 N
    scanf("%d", &N); //입력받기
    int Line = 1;
    int Space = N - Line;

    if(N == 1) //특별히 예외처리
        printf("*");

    while(Space > 0){ //공간 쌓기
        Space = N - Line; //빈공간 크기 지정

        for(int Sp=0;Sp < Space; Sp++) //첫 빈공간 만들기
            printf(" ");

        for(int Sp=0;Sp < (N - Space) * 2 - 1; Sp++) //출력하기
            printf("*");

        for(int Sp=0;Sp < Space; Sp++) //나머지 빈공간 채우기
            printf(" ");
        
        printf("\n"); //개행
        Line++; //라인 늘리기
    }

    Space = 1; //초기화
    while(Space < N){ //나머지 공간 쌓기
        for(int Sp=0;Sp < Space; Sp++) //첫 빈공간 만들기
            printf(" ");

        for(int Sp=0;Sp < (N - Space) * 2 - 1; Sp++) //출력하기
            printf("*");

        for(int Sp=0;Sp < Space; Sp++) //나머지 빈공간 채우기
            printf(" ");
        
        printf("\n"); //개행
        Line++; //라인 늘리기
        Space++; //빈공간 늘리기
    }

    return 0;
}