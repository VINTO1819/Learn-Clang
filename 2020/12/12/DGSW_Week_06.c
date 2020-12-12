/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 12일(토), "주간 과제 - 조건문 3"
*/

#include <stdio.h>

//소수인지 아닌지 확인
int isPrime(int N){
    for(int i=2; i < N + 1;i++){
        
        if(N == i){ //자기 자신과 동일해진다면(= 소수)
            return 1;
        }

        if(i != 1 && i != N && N % i == 0){ //1과 자기 스스로 이외의 값으로도 나누어 떨어진다면
            return 0;
        }
    }
    return -1;
}

int main(void){
    /*
        조건 :
          * 양의 정수를 소인수분해하라
    */
    
    int N; //입력값 N
    scanf("%d", &N); //입력받기
    
    int Current = N;
    int Prime = 2;
    while(!isPrime(Current)){ //현재 값이 소수가 될 때까지 무한반복
        if(Prime >= Current) //소수 값이 입력값을 넘어서면 초기화
            Prime = 2;

        if(isPrime(Prime) && Current % Prime == 0){ //소수로 나누어떨어진다면 그 수로 나누기
            //printf("%d / %d = %d\n", Current, Prime, Current / Prime);
            printf("%d ", Prime);
            Current = Current / Prime; //나눈 값 대입
            continue; //이 수로 계속 나눠진다면 값 변경은 냅두기(다만 이후에 이 값으로 안나눠지면 다른 값으로 대입)
        } //소수가 아니면 건너뛰기

        Prime++;

    }

    printf("%d", Current); //나머지값 출력

    return 0;
}