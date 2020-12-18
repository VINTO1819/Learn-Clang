/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 18일(금), "배열 - 기초 1"
*/

#include <stdio.h>

//최댓값
int getMaximumIndex(int NumArr[], int size){
    int CurrentMaximumIndex = 0; //현재 최댓값의 위치 선언
    for(int i = 0; i < size; i++){ //Item의 개수만큼
        if(NumArr[CurrentMaximumIndex] < NumArr[i]) //가져온 값이 현 최대값보다 크다면
            CurrentMaximumIndex = i;
    }
    return CurrentMaximumIndex;
}

//최솟값
int getMinimumIndex(int NumArr[], int size){
    int CurrentMinimumIndex = 0; //현재 최솟값의 위치 선언
    for(int i = 0; i < size; i++){ //Item의 개수만큼
        if(NumArr[CurrentMinimumIndex] > NumArr[i]) //가져온 값이 현 최대값보다 크다면
            CurrentMinimumIndex = i;
    }
    return CurrentMinimumIndex;
}

int main(void){
    /*
        1차원 배열의 선언법
        타입형 배열명[사이즈] = {Item}
    */

    int Numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int MaxIndex = getMaximumIndex(Numbers, sizeof(Numbers) / sizeof(int));
    int MinIndex = getMinimumIndex(Numbers, sizeof(Numbers) / sizeof(int));
    printf("Maximum is %d(%d th Item)\nMinimum is %d(%d th Item)", 
        Numbers[MaxIndex], MaxIndex + 1,
        Numbers[MinIndex], MinIndex + 1
    );

    return 0;
}