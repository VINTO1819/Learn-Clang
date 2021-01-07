/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 7일(목), "구조체 - 기초"
*/

#include <stdio.h>
#include <string.h>

struct Game{
  char* name;
  int year;
  int price;
  char* company;

};

void PrintGameInfo(struct Game* GameInfo){
  printf("%s\n", GameInfo->name);
  printf(" * 개발사 : %s\n", GameInfo->company);
  printf(" * 가격 : %d\n", GameInfo->price);
  printf(" * 발매일 : %d\n\n", GameInfo->year);
}

int main(void){
  struct Game CitiesSkylines;
  CitiesSkylines.name = "시티즈 스카이라인";
  CitiesSkylines.year = 2015;
  CitiesSkylines.price = 35000;
  CitiesSkylines.company = "콜로셜 오더";

  PrintGameInfo(&CitiesSkylines);

  struct Game FlightSimulator2020 = {
    "마이크로소프트 플라이트 시뮬레이터 2020",
    2020,
    63000,
    "Microsoft, Asobo Studio"
  };
  PrintGameInfo(&FlightSimulator2020);

  return 0;
}