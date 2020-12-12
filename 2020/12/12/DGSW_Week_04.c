/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 12일(토), "주간 과제 - 조건문 1"
*/

#include <stdio.h>

int main(void){
    /*
        조건 :
          * 2 이상 1000 이하의 정수 N이 주어진다
          * 숫자 N의 소수 여부를 판단하라
          * continue와 break를 이용해 해결하라
    */
    
    int N; //입력값 N
    scanf("%d", &N); //입력받기
    for(int i=2; i < 1000 + 1;i++){
        if(N < 2 || N > 1000){ //유효범위 밖이면
            printf("Invalid Input");
            break;
        }else{
            if(N == i){ //자기 자신과 동일해진다면(= 소수)
                printf("prime");
                continue;
            }

            if(i != 1 && i != N && N % i == 0){ //1과 자기 스스로 이외의 값으로도 나누어 떨어진다면
                printf("composite");
                break;
            }
        }
    }

    return 0;
}