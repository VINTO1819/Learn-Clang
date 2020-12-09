/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 09일(수), "조건문 - if else"
*/

#include <stdio.h>

int main(void){
    //버스를 탄다고 할 때 학생/일반인으로 구분(20세로 구별)
    int yourAge;
    printf("How old are you? >");
    scanf("%d", &yourAge);

    if(yourAge >= 20){ //만 20세 이상(성인)이라면
        printf("You are an adult");
    }else{ //미성년자라면(학생이라면)
        //학교 구분하기
        if(yourAge >= 17){ //고등학생이라면
            printf("(High");
        }else if(yourAge >= 14){ //중학생이라면
            printf("(Middle");
        }else if(yourAge <= 8 && yourAge >= 13){ //그 이하라면(초등학생이라면)
            printf("(Elementary");
        }else{
            printf("(No");
        }
        printf(" School)");
    }

    return 0;
}