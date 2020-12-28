/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 28일(월), "포인터 - 기초 1"
*/

#include <stdio.h>

//두 변수의 값을 바꿈
void swap(int* a, int* b){
  int tmp;
  tmp = *a; //tmp에 a가 가리키는 값을 할당
  *a = *b; //a가 가리키는 값은 이제부터 b가 가리키는 값임
  *b = tmp; //b가 가리키는 값은 이제 tmp의 값임
}

int main(void){
  //두 변수의 값을 서로 변환하는 프로그램
  int x = 5, y = 2;

  //5번 스왑하기
  for(int th=1;th < 5 + 1;th++){
    swap(&x, &y);
    printf("%dth swap : x is %d and y is %d\n", th, x, y);
  }
  return 0;
}