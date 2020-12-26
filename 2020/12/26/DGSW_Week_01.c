/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 26일(일), "주간 과제 - 배열 1"
*/

#include <stdio.h>

/*
    조건 :
      * 100개의 정수를 저장하는 배열이 있다.
      * 정수들을 차례대로 입력받다가 0이 되면 종료한다.
      * 0을 제외하고 그때까지 입력된 정수들을 나중에 입력된 순으로 출력하라
*/

int Arr[100]; //Array 선언

//특정 위치에 있는 Array 값 수정
void setVal(int pos, int val){
    Arr[pos] = val;
    return;
}

//값 가져오기
int getVal(int pos){
    return Arr[pos];
}

int main(void){
    int Index = 0;
    int Input = -1; //-1로 초기화
    while(Input != 0){ //0을 입력받을 때까지 계속 반복
        scanf("%d", &Input);
        if(Input != 0){ //올바른 값이라면
            printf("%d at pos %d\n", Input, Index);
            setVal(Index, Input); //값 설정
            Index++;
        }
    }

    printf("Index : %d\n", Index);

    //입력이 끝나면 출력
    for(int PrintIndex=Index - 1;PrintIndex >= 0; PrintIndex--){ //거꾸로 출력
        printf("%d ", getVal(PrintIndex));
    }
    return 0;
}