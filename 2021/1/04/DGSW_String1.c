/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 4일(월), "문자열 - 하나의 문자열 안에 글자 수 세기"
*/

#include <stdio.h>

int main(void){
  char input[1000]; //100개의 공간
  gets(input); //문자열을 입력받아 배열에 할당

  /*
    Hello -> Size 5(one byte per char)
    안녕하세요 -> Size 10(two byte per char)
  */

  int Size = 0;
  while(input[Size] != '\0'){Size++;} //문자열을 입력받으면 \0, 즉 null값이 마지막에 붙기 때문에 null이 나올 때까지 Size를 증가시키면 된다.

  printf("해당 문자열, \'%s\'의 길이는 %d입니다.", input, Size);

  return 0;
}