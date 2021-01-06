/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 6일(수), "구조체 - 두 점 사이의 거리를 계산하는 프로그램"
*/

#include <stdio.h>
#include <math.h>

struct Point{
  int x;
  int y;
};

int min(int a, int b){
  return (a > b) ? (a - b) : (b - a); 
}

int main(void){
  struct Point Point1;
  Point1.x = 12;
  Point1.y = 8;

  struct Point Point2;
  Point2.x = 9;
  Point2.y = 6;

  int x = 0, y = 0;
  x = min(Point1.x, Point2.x); //두 x좌표의 거리
  y = min(Point1.y, Point2.y); //두 y좌표의 거리

  //피타고라스 법칙을 통해 거리를 알아냄
  float z = 0.0f;
  z = sqrt(x*x + y*y); //z^2 = x^2 + y^2, z=루트(x^2 + y^2)
  
  printf("두 점 P1(%d, %d)과 P2(%d, %d)의 거리는 %lf이다.", Point1.x, Point1.y, Point2.x, Point2.y, z);

  return 0;
}