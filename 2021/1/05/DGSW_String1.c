/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 5일(화), "문자열 - String vs Character"
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char Character = 'A'; //문자
  printf("%c\n", Character);

  char String[] = "Hello World!"; //문자열
  printf("%s\n", String);

  //한국어
  char StringKor[] = "안녕"; //[안 -> 2byte] [녕 -> 2byte] [\0 -> 1byte] -> 총 5byte
  printf("size is : %d\n", (sizeof(StringKor) / sizeof(char)));

  char cArray[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
  for(int i = 0;cArray[i] != NULL; i++)
    printf("%c ", cArray[i]); //printf char
  printf(" -> ");
  for(int i = 0;cArray[i] != NULL; i++)
    printf("%d ", cArray[i]); //printf ascii code
  printf("\n");

  char name[64];
  scanf("%s", name, sizeof(name));
  printf("name is : %s", name);

  return 0;
}