/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 09일(수), "분기문 - and or not"
*/

#include <stdio.h>

int main(void){
    int a = 5, b = 5, c = 4;
    if(a == b && b == c){
        printf("a equals b and b equals c");
    }else if(a == b || b == c || a == c){
        printf("a equals b or b equals c or a equals c");
    }

    return 0;
}