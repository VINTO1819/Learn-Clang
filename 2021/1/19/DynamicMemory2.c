/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 19일(화), "동적 메모리 - 동적 메모리로 알파벳 출력"
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  char* String;
  String = (char*)malloc(sizeof(char) * 100); //100개의 char 변수를 가리키는 포인터 변수 할당
  if(String == NULL){printf("동적메모리 할당에 실패했습니다.\n");return 0;}
  int i = 0;
  for(i=0;i < 26; i++){
    *(String + i) = 'a' + i; //a의 ASCII 코드에서부터 i씩 더한 값
  }
  *(String + i) = '\0'; //마지막에 \0 추가
  printf("%s", String);
  free(String);

  return 0;
}