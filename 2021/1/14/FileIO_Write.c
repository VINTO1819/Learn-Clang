/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 14일(목), "파일 입출력 - 쓰기"
*/

#include <stdio.h>

int main(void){
  FILE *fp = NULL;
  fp = fopen("data.txt", "w"); //w -> write, r -> read

  if(fp == NULL){printf("can't open file, data.txt\n");return 0;}
  printf("파일 열기에 성공했습니다.\n");

  fputc('H', fp);
  fputs("Hello", fp);
  fclose(fp);

  return 0;
}