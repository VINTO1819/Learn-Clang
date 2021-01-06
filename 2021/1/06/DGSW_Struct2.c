/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 6일(수), "구조체 - 학생 구조체를 입력받아 출력하는 프로그램"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
  int Number;
  char Name[32];
  double Grade;
};

int main(void){
  struct Student NewStudent;
  printf("이름을 입력하세요 >");
  scanf("%s", NewStudent.Name, 32);
  
  printf("학점을 입력하세요 >");
  scanf("%lf", &NewStudent.Grade);

  printf("번호를 입력하세요 >");
  scanf("%d", &NewStudent.Number);

  printf("Student Info : %s\n", NewStudent.Name);
  printf(" * Grade : %.1f\n", NewStudent.Grade);
  printf(" * Number : %d\n", NewStudent.Number);
  return 0;
}