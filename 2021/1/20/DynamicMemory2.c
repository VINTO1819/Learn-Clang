/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 20일(수), "동적 메모리 - 2차원 배열"
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define INITVALUE 0 //초기화 값

void print2ndArr(int** arr, int x, int y){
  for(int i=0;i<y;i++){
    for(int i2=0; i2<x; i2++){
      printf("%3d ", *(*(arr + i) + i2));
    }
    printf("\n");
  }
}

int main(void){
  int** ptr;
  ptr =  (int**)malloc(sizeof(int*) * SIZE); //세로가 8인 int* 배열선언
  for(int i=0;i<SIZE;i++){
    *(ptr + i) = (int*)malloc(sizeof(int) * SIZE); //가로가 8인 int 배열 선언
    for(int i2 = 0; i2<SIZE; i2++){
      *(*(ptr + i) + i2) = 6 * i + i2;
    }
  }

  print2ndArr(ptr, SIZE, SIZE);
  free(ptr);

  return 0;
}
