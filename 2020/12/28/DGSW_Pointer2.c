/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 28일(월), "포인터 - 기초 2"
*/

#include <stdio.h>

void add10toN(int* ptr){
  *ptr += 10;
}

//포인터 변수의 값을 바꾸는 프로그램
int main(void){
  int n = 10;
  int* p;
  p = &n;

  printf("n is %d\n", n);
  add10toN(p);
  printf("n is %d\n", n);

  return 0;
}