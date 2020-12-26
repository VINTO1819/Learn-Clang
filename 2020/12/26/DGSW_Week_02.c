/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 26일(일), "주간 과제 - 배열 2"
*/

#include <stdio.h>
#include <windows.h>
#pragma execution_character_set("utf-8")

/*
    조건 :
      * 크기가 8인 char 배열이 있다.
      * 이 배열을 {'H', 'E', 'E', 'S', 'O', 'N', 'G', '\0'} 으로 초기화한다.
      * 문자 1개를 입력받아 해당 배열에서 해당 문자의 위치를 "모두" 구하라. (단 없을 경우에는 "없음"을 출력하라)
*/

int Arr[8] = {'H', 'E', 'E', 'S', 'O', 'N', 'G', '\0'}; //Array 선언

//Char이 배열 내에서 해당 위치에 있는지 여부 
int existsChar(int pos, char val){
    return Arr[pos] == val;
}

int main(void){
    SetConsoleOutputCP(65001);

    char Input; //입력값
    int Found = 0; //찾은 개수
    scanf("%c", &Input);

    //배열 검색
    for(int Index=0;Index<8;Index++){
        if(existsChar(Index, Input)){
            printf("%d ", Index);
            Found++;
        }
    }

    //맞는 char이 없으면
    if(Found == 0)
        printf("없음");

    return 0;
}