/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 5일(화), "문자열 - 아스키코드"
*/

#include <stdio.h>
#include <string.h>

int main(void){
  //ASCII : 7bit
  //ASCII 코드표 문자 모두(128개) 출력해보기
  for(int i=0; i<=128; i++){
    printf("%c(%dth)\n", i, i);
  }

  return 0;
}