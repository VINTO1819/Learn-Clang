/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 11일(월), "구조체 - 구조체 배열과 포인터"
*/

#include <stdio.h>
#include <string.h>

struct Fruit{
  char name[10];
  int price;
};

int main(void){
  struct Fruit Apple = {
    "사과", 1200
  };

  //구조체 배열
  struct Fruit Fruits[2] = {
    {"망고", 10000},
    {"바나나", 2000}
  };


  struct Fruit* PFruit;
  PFruit = &Apple;
  printf("%s : %d원\n", (*PFruit).name, (*PFruit).price);

  PFruit = Fruits;
  printf("%s : %d원\n", (*(PFruit +0)).name, (*(PFruit + 0)).price);
  printf("%s : %d원\n", (*(PFruit +1)).name, (*(PFruit + 1)).price);
  
  return 0;
}