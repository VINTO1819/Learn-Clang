/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 22일(화), "다차원 배열 - 기초 2"
*/

#include <stdio.h>

int main(void){
    int ScoreList[4][2]; //학생 수와 과목수(영, 수)
    for(int StudentIndex=0;StudentIndex < 4;StudentIndex++){
        for(int InputIndex=0; InputIndex < 2; InputIndex++){
            int Score;
            scanf("%d", &Score);
            ScoreList[StudentIndex][InputIndex] = Score;
        }
    }

    int Total[2] = {0, 0};
    for(int StudentIndex=0;StudentIndex < 4;StudentIndex++){
        for(int InputIndex=0; InputIndex < 2; InputIndex++){
            Total[InputIndex] += ScoreList[StudentIndex][InputIndex];
        }
    }

    printf("Result : %d\n", Total[0]);
    printf("Result : %d", Total[1]);

    return 0;
}