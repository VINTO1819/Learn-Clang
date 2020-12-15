/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 15일(화), "반복함수 - 숫자 피라미드"
*/

#include <stdio.h>

//for과 while을 이용해 작성
void print(int size){
    int i, j;
    for(i=0; i < size + 1; i++){
        for(j = 0; j < i; j++){
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}

//메인함수
int main(void){
    print(10);

    return 0;
}