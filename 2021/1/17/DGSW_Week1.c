/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 17일(일), "주간 과제 - File I/O"
*/

#include <stdio.h>

int main(void){
  /*
    조건 :
      * myfile.txt가 있다
      * 파일에 저장된 이름과 나이를 출력하라
  */

  FILE* file = fopen("myfile.txt", "r");

  char name[256];
  int age;

  while(!feof(file)){
    fscanf(file, "%s %d", name, &age);
    printf("%s의 나이 %d\n", name, age);
  }
  fclose(file);

  return 0;
}