/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 6일(수), "구조체 - 학생 구조체를 다루고 출력하는 프로그램"
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
  NewStudent.Number = 12; //12번 학생 
  NewStudent.Grade = 3.8; //학점
  strcpy(NewStudent.Name, "SeungMin Lee");

  printf("Student Info : %s\n", NewStudent.Name);
  printf(" * Grade : %.1f\n", NewStudent.Grade);
  printf(" * Number : %d\n", NewStudent.Number);
  return 0;
}