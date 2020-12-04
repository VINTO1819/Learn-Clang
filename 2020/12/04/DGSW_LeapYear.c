/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 04일(금), "반복문과 조건문 - 윤년 여부 확인"
*/

#include <stdio.h>

int main(void)
{
    /*
        윤년의 조건:
          * 4년마다, 다만 100년 단위일 때에는 윤년이 아님
          * 400년 단위면 어떤 상황에도 윤년임
    */

    int Year;
    printf("Input Year >");
    scanf("%d", &Year);

    int isLeapYear = 0; //기본값은 false로 설정
    if (Year % 4 == 0 && Year % 100 != 0){ //4로 나눴을 때 나머지가 0이지만 100으로 나눴을 때 나머지가 0이 아닐 경우
        isLeapYear = 1;
    }
    else if (Year % 400 == 0){ //400으로 나눴을 때 나머지가 0이면
        isLeapYear = 1;
    } //이미 Default 값이 false(= 윤년이 아님)이므로 else문은 이용할 필요가 없음

    printf("%d is %s year", Year, (isLeapYear) ? "leap" : "not leap");
    return 0;
}