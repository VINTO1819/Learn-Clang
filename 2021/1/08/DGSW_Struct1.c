/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 7일(목), "구조체 - 사각형의 넓이와 둘레 구하기"
*/

#include <stdio.h>
#include <string.h>

struct point{
  int x;
  int y;
};

struct rect{
  struct point p1;
  struct point p2;
};

int abs(int n){
  return (n >= 0) ? n : -n;
}

int main(void){
  int w, h, area, peri;

  printf("좌측 상단의 좌표를 입력하세요 >");
  struct point p1;
  scanf("%d %d", &p1.x, &p1.y);

  printf("우측 하단의 좌표를 입력하세요 >");
  struct point p2;
  scanf("%d %d", &p2.x, &p2.y);

  struct rect r = {p1, p2};
  w = abs(r.p1.x - r.p2.x);
  h = abs(r.p1.y - r.p2.y);
  area = w*h;
  peri = 2 * (w + h);

  printf("가로 : %d\n세로 : %d\n넓이 : %d\n둘레 : %d\n", w, h, area, peri);

  return 0;
}