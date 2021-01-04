/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 4일(월), "문자열 - 기본 라이브러리, strcpy"
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char input[20] = "I love you";
  char result[10] = "사랑해";
  printf("기존 : %s | %s\n", result, input);
  strcpy(result, input);
  printf("이후 : %s | %s", result, input);
  return 0;
}