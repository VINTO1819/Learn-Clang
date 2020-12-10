/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 10일(목), "switch case - if to switch"
*/

#include <stdio.h>

int main(void){
    int age;
    scanf("%d", &age);
    switch(age){
        case 8 :
        case 9 :
        case 10 :
        case 11 :
        case 12 :
        case 13 :
            printf("elementary school");
            break;
        case 14 :
        case 15 :
        case 16 :
            printf("middle school");
            break;
        case 17 :
        case 18 :
        case 19 :
            printf("high school");
            break;
        default :
            printf("not student");
            break;
    }

    return 0;
}