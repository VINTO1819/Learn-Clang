/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 19일(화), "동적 메모리 - 기초"
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int* pi; //pointer integer
  pi = (int*)malloc(sizeof(int)); //정수형의 크기만큼 메모리를 할당받고, 그 메모리의 주소를 반환해라
  if(pi == NULL){printf("동적메모리 할당에 실패했습니다.\n");return 0;}

  *pi = 100;
  printf("값은 %d입니다", *pi);
  free(pi); //할당받은 메모리를 반환
  return 0;
}