/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 4일(월), "문자열 - 기본 라이브러리, strcmp"
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char input1[5] = "A";
  char input2[5] = "B";
  printf("문자열 비교 : %d", strcmp(input1, input2));
  return 0;
}