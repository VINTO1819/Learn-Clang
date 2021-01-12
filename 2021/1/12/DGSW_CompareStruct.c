/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 12일(화), "구조체 - 구조체 비교"
*/

#include "stdio.h"

typedef struct pointstruct{
  int x, y;
} point;

int comparePoint(point* p1, point* p2){
  return (p1->x == p2->x && p1->y == p2->y);
}

int main(void){
  point p1 = {30, 10};
  point p2 = {30, 10};

  //구조체 자체로는 판단할 수 없음
  if(comparePoint(&p1, &p2)){printf("p1 equals p2");}

  return 0;
}