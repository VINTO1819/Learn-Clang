/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 11일(월), "구조체 - 구조체 안의 구조체, typedef"
*/

#include <stdio.h>
#include <string.h>

struct Fruit{
  char name[20];
  int price;

  struct Fruit* Similar;
};

typedef struct Fruit FruitType;

void PrintFruit(FruitType* FruitItem){
  printf("%s : %d원", FruitItem->name, FruitItem->price);
  if(FruitItem->Similar != NULL){
    printf("(비슷한 과일, %s : %d원)", FruitItem->Similar->name, FruitItem->Similar->price);
  }
  printf("\n");
}

int main(void){
  FruitType AppleMango = {
    "애플망고", 14000, NULL
  };

  FruitType Apple = {
    "사과", 1200, &AppleMango
  };

  PrintFruit(&Apple);

  return 0;
}