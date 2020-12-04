/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 04일(금), "반복문과 조건문 - 2중 for문으로 사각형 그리기"
*/


#include <stdio.h>

int main(void)
{
    int x, y; //x축 y축 선언
    printf("Size >");
    int N;
    scanf("%d", &N);

    for(y=0;y < N;y++){
        for(x=0;x < N;x++){
            if(x == N - 1){
                printf("*");
            }else{
                printf("* ");
            }
        }    
        printf("\n");
    }
    
    return 0;
}