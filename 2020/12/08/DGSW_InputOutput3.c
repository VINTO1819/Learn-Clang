/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 08일(화), "기본 입출력 - 입력받은 수까지 각각 계속 더하기"
*/

#include <stdio.h>
#include <windows.h>

int main(void){
    int N;
    scanf("%d", &N);
    int i, Result = 0;
    for(i=1;i < N + 1;i++){
        Result += i;
        printf("%d", i);
        if(i < N)
            printf(" + ");
    }
    printf(" = %d", Result);

    return 0;
}