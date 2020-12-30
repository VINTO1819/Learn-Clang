/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 30일(수), "포인터와 배열의 관계 2"
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8")

//배열과 위치, 값을 받아 해당 위치의 배열의 값을 수정
void setArr(int arr[], int pos, int val){
  /*
    이때 사용자가 찾고자 하는 아이템의 메모리상 위치는
      arr의 위치 + (pos * 4byte)이다.
    만약 사용자가 8byte짜리 자료형을 가지는 배열을 선언했다면, 이 간격은 4byte가 아니라 8byte가 된다.
  */
  *(arr + pos) = val;
}

int main(void){
  SetConsoleOutputCP(65001);

  int arr[4] = { 2, 0, 7, 7 };
  for(int i = 0; i < 4;i++)
    printf("arr[%d]는 %d\n", i, *(arr + i));
  
  printf("\n");
  setArr(&arr[0], 0, 3); //만약 arr + 1을 한다면 arr에서 1칸 밀린 상태로 설정하게 됨

  for(int i = 0; i < 4;i++)
    printf("arr[%d]는 %d\n", i, *(arr + i));


  printf("\n");
  setArr(&arr[3], 0, 0); //이 경우 pos가 0임에도 마지막 칸의 값이 변경됨

  for(int i = 0; i < 4;i++)
    printf("arr[%d]는 %d\n", i, *(arr + i));

  return 0;
}