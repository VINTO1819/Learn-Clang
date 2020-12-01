/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 01일(화), "연산자 1 - 기초"
*/

#include <stdio.h>

#define SEC_PER_MIN 60

int main(void){
    /*
        대표적인 연산자 :
          + 연산자 : 두 변수를 더함
          ++ 연산자 : 정수형 변수의 값을 1씩 증가
          - 연산자 : 두 변수를 뺌
          -- 연산자 : 정수형 변수의 값을 1씩 감소
          * 연산자 : 두 변수의 값을 곱함
          / 연산자 : 두 변수의 값을 나눔
          % 연산자 : 두 변수의 값을 나눈 값의 나머지를 구함
          = 연산자 : 변수에 값을 대입함
          == 연산자 : 두 변수가 같은지 아닌지를 bool로 반환
          ! 연산자 : 뒤에 붙는 bool 값을 반전시킴
          || 연산자 : 두 조건 중 하나라도 true면 true 반환
          && 연산자 : 두 조건이 모두 true면 true 반환
          += 연산자 : 앞 변수에 뒤에 있는 값을 더한 합을 앞 변수에 할당
          -= 연산자 : 앞 변수에 뒤에 있는 값을 뺀 차를 앞 변수에 할당

        예시 :
        1 + 2에서 2는 "피연산자", "+"는 연산자임
    */

    //시간 나누기
    int input = 1000;
    int min = input / SEC_PER_MIN; //1분은 60초
    int sec = input % SEC_PER_MIN; //60초로 나눠지지 않는 값(= 나머지)는 초로 환산
    printf("%ds is %dmin %dsec!\n\n", input, min, sec);
    
    //증감 연산자
    int x = 0;
    printf("x = %d\n", x);
    x++;
    printf("x = %d\n", x);

    //"복합대입" 연산자
    int y = 0;
    printf("y = %d\n", y);
    y += 10;
    printf("y = %d\n", y);

    return 0;
}