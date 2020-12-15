/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 15일(화), "재귀함수 - 특정 문자열을 재귀함수로 반복 출력하기"
*/

#include <stdio.h>

//특정 char 반복출력
void RecursivePrint(int count, char c){
    if(count == 0){ //카운트가 0이 되면
        return;
    }
    printf("%c", c);
    RecursivePrint(count - 1, c); //카운트를 1 줄여서 스스로를 호출(즉 count - 1이 0이 되면 호출 중단)
}

//메인함수
int main(void){
    int count;
    scanf("%d", &count);
    RecursivePrint(count, 'H'); //첫번째 호출
    return 0;
}