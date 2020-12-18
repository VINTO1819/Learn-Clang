/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 18일(금), "배열 - 기초 2"
*/

#include <stdio.h>

//최댓값(짝수)
int getMaximumIndex_Even(int NumArr[], int size){
    int CurrentMaximumIndex = 0; //현재 최댓값의 위치 선언
    for(int i = 0; i < size; i++){ //Item의 개수만큼
        if(NumArr[CurrentMaximumIndex] < NumArr[i] && NumArr[i] % 2 == 0) //가져온 값이 현 최대값보다 크다면
            CurrentMaximumIndex = i;
    }
    return CurrentMaximumIndex;
}

//최댓값(홀수)
int getMaximumIndex_Odd(int NumArr[], int size){
    int CurrentMaximumIndex = 0; //현재 최댓값의 위치 선언
    for(int i = 0; i < size; i++){ //Item의 개수만큼
        if(NumArr[CurrentMaximumIndex] < NumArr[i] && NumArr[i] % 2 != 0) //가져온 값이 현 최대값보다 크다면
            CurrentMaximumIndex = i;
    }
    return CurrentMaximumIndex;
}

int main(void){
    /*
        1차원 배열의 선언법
        타입형 배열명[사이즈] = {Item}
    */

    int Numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int MaxIndex_Even = getMaximumIndex_Even(Numbers, sizeof(Numbers) / sizeof(int));
    int MaxIndex_Odd = getMaximumIndex_Odd(Numbers, sizeof(Numbers) / sizeof(int));
    printf("Maximum is %d(Even)\nMinimum is %d(Odd)", 
        Numbers[MaxIndex_Even], 
        Numbers[MaxIndex_Odd]
    );

    return 0;
}