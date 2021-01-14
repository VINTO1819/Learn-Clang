/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 14일(목), "파일 입출력 - 읽고 단어찾기"
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char fname[256];
  char findWord[256];
  char buffer[256];
  int line = 0;
  printf("파일 이름을 입력하세요 >");
  scanf("%s", fname);

  printf("찾을 단어를 입력하세요 >");
  scanf("%s", findWord);

  FILE *fp = NULL;
  fp = fopen(fname, "r"); //w -> write, r -> read

  if(fp == NULL){fprintf(fp, "can't open file, %s\n", fname);return 0;}
  printf("파일 열기에 성공했습니다.\n");

  while(fgets(buffer, 256, fp)){
    line++;
    if(strstr(buffer, findWord)){
      printf("라인 %d에 %s이(가) 있습니다.", line, findWord);
    }
  }


  fclose(fp);

  return 0;
}