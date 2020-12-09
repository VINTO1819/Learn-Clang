/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 09일(수), "분기문 - break continue"
*/

#include <stdio.h>

int main(void){
    //총 30명의 사람들 중에서 10명까지만 받음 
    for(int i=1;i <= 30;i++){
        if(i > 10)
            break; //10번째 이후의 사람이라면 반복문 종료
        printf("Number %d\n", i);
    }
    printf("\n");

    //총 10명의 사람들 중에서 2의 배수 또는 3의 배수의 번호만 출력
    for(int i=1;i <= 10;i++){
        if(i % 2 != 0 && i % 3 != 0)
            continue; //2의 배수 또는 3의 배수가 아니면 무시
        printf("Number %d\n", i);
    }
    return 0;
}