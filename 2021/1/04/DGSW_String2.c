/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 4일(월), "문자열 - 기본 라이브러리, stlen"
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char input[5] = "Love";
  printf("문자열의 길이 : %d\n", strlen(input));

  return 0;
}