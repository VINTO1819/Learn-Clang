/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 12일(토), "주간 과제 - 이중반복문 2"
*/

#include <stdio.h>

int main(void){
    /*
        조건 :
          * 숫자 N, Unit이 주어진다
          * 숫자 N만큼 Unit 단위로 잘라서 지그재그로 출력하라
    */
    
    int N, Unit; //입력값 N과 Unit
    scanf("%d %d", &N, &Unit); //입력받기
    int i=1;
    int switcher = 0; //true false
    while(i < N + 1){ //1부터 N까지
        //홀수 : 좌 -> 우
        //짝수 : 우 -> 좌

        int MaximiumOfLine = i + Unit - 1; //한줄의 최대값
        for(int x=0;x < Unit; x++){ //단위만큼 한줄 출력
            if(switcher == 0){ //홀수면
                printf("%d ", i); //그대로 출력
            }else{
                printf("%d ", MaximiumOfLine - (x + Unit) + Unit); //반대로 출력
            }
            i++;
        }
        switcher = (switcher == 0) ? 1 : 0; //값 반전
        printf("\n");
    }

    return 0;
}