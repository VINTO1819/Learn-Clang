/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 10일(목), "switch case - 가위바위보"
*/

#include <stdio.h>
#include <time.h>
#include <cstdlib>

int main(void){
    srand(time(NULL)); //seed값 지정
    int i = rand() % 3; //0~2
    switch(i){
        case 0 : //바위
            printf("rock");
            break;
        case 1 : //바위
            printf("scissors");
            break;
        case 2 : //보
            printf("paper");
            break;
        default : //예외
            printf("I don't know");
    }

    return 0;
}