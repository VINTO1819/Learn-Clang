/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 12일(토), "주간 과제 - 조건문 2"
*/

#include <stdio.h>

//두 수 중에서 가장 작은 수
int getMinimum(int a, int b){
    return (a > b) ? b : a;
}

int main(void){
    /*
        조건 :
          * 두 정수의 공약수를 구하라
    */
    
    int N1, N2; //입력값 N1, N2
    scanf("%d %d", &N1, &N2); //입력받기
    for(int i=1; i < getMinimum(N1, N2) + 1;i++){ //i가 가장 작은 수가 될 때까지 반복
        if(N1 % i == 0 && N2 % i == 0) //두 수 모두 i로 나눠지면(공약수이면)
            printf("%d ", i);
    }

    return 0;
}