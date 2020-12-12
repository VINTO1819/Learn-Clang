/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 12일(토), "주간 과제 - 이중반복문 1"
*/

#include <stdio.h>

int main(void){
    /*
        조건 :
          * 숫자 N이 주어진다
          * 숫자 N만큼을 높이로 하는 숫자 피라미드를 출력하라
    */
    
    int N; //입력값 N
    scanf("%d", &N); //N 입력받기
    int count = 1;
    for(int i=0;i < N;i++){
        for(int x=0;x < i + 1; x++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}