/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 17일(목), "프로젝트 - 비밀번호 마스터"
*/

#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>

#pragma execution_character_set("utf-8") //한국어 사용가능(UTF8 지원)

int Door(int Difficulty){ //맞으면 1, 틀리면 0 반환
    int i1 = rand() % (Difficulty * 9 + 1); //Difficulty가 1이면 1부터 9까지 반환
    int i2 = rand() % (Difficulty * 9 + 1); //위처럼 또다른 수

    int Result;

    //0~3 총 4개의 경우의 수
    switch(rand() % 4){
        case 0 :
            Result = i1 + i2;
            printf("%d + %d = ?\n", i1, i2, Result);
            break;
        case 1 :
            Result = i1 - i2;
            printf("%d - %d = ?\n", i1, i2, Result);
            break;
        case 2 :
            Result = i1 * i2;
            printf("%d * %d = ?\n", i1, i2, Result);
            break;
        case 3 :
            Result = i1 / i2;
            printf("%d / %d = ?\n", i1, i2, Result);
            break;
        default: 
            Result = 0;
            break;Result
    }

    printf("Your Result >");
    int UserResult;
    scanf("%d", &UserResult);
    return Result == UserResult; //맞았는지 틀렸는지 확인
}

int main(void){
    SetConsoleOutputCP(65001); //한국어 사용가능(어차피 입력은 한국어로 하면 안통함)
    srand(time(NULL)); //seed 설정

    /*
        조건 :
          * 문이 총 5개가 있고, 각 문마다 어려운 난이도의 수학 문제를 낸다(랜덤)
          * 맞히면 통과, 틀리면 실패
    */

   for(int i=1;i < 6;i++){
        int Result = Door(i);
        if(Result){
            printf("Correct\n\n");
        }else{
            printf("Wrong\n\n");
        }
   }
    
    return 0;   
}