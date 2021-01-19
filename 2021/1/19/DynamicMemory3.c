/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 19일(화), "동적 메모리 - 동적 메모리로 숫자 5개 처리하기"
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void){
  int* numArr;
  numArr = (int*)malloc(sizeof(int) * SIZE); //5개의 int 변수를 가리키는 포인터 변수 할당
  if(numArr == NULL){printf("동적메모리 할당에 실패했습니다.\n");return 0;}

  *(numArr) = 100;
  *(numArr + 1) = 200;
  *(numArr + 2) = 300;
  *(numArr + 3) = 400;
  *(numArr + 4) = 500;

  for(int i = 0; i < SIZE; i++){
    printf("%d\n", *(numArr + i));
  }

  free(numArr);

  return 0;
}