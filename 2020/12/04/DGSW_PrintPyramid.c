/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 04일(금), "반복문과 조건문 - 2중 for문으로 피라미드 출력하기"
*/


#include <stdio.h>

int main(void)
{
    int x, y; //x축 y축 선언
    printf("Size >");
    int N;
    scanf("%d", &N);

    for(y=N;y >= 0;y--){ //y가 0보다 작아질 때까지 값을 감소시키며 반복
        for(x=0;x < N;x++){ //x가 N(크기)보다 작아질 때 까지 값을 증가시키며 반복
            if(x >= y){ //작아지려는 y값보다 커지려는 x값이 크거나 같다면
                printf("* ");
            }else{ //아니라면
                printf(" ");
            }
        }    
        printf("\n");
    }
    
    return 0;
}