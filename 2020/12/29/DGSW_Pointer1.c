/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 29일(화), "포인터 - 친구들의 주소"
    나도코딩 유튜브 강좌
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8")

int main(void){
  SetConsoleOutputCP(65001);

  //각자의 비밀번호
  int Chulsu = 1;
  int YoungHee = 2;
  int Minsu = 3;

  printf("철수의 주소 %p, 암호 : %d\n", &Chulsu, Chulsu);
  printf("영희의 주소 %p, 암호 : %d\n", &YoungHee, YoungHee);
  printf("민수의 주소 %p, 암호 : %d\n", &Minsu, Minsu);

  printf("\n");

  //미션맨
  int* Agent;
  Agent = &Chulsu; //철수의 주소 가져오기
  printf("철수의 주소 %p, 암호 : %d\n", Agent, *Agent);
  Agent = &YoungHee; //철수의 주소 가져오기
  printf("영희의 주소 %p, 암호 : %d\n", Agent, *Agent);
  Agent = &Minsu; //철수의 주소 가져오기
  printf("민수의 주소 %p, 암호 : %d\n", Agent, *Agent);

  printf("\n");

  //암호에 3 곱해서
  Agent = &Chulsu; //철수의 주소 가져오기
  *Agent *= 3;
  printf("철수의 주소 %p, 암호 : %d\n", Agent, *Agent);
  Agent = &YoungHee; //철수의 주소 가져오기
  *Agent *= 3;
  printf("영희의 주소 %p, 암호 : %d\n", Agent, *Agent);
  Agent = &Minsu; //철수의 주소 가져오기
  *Agent *= 3;
  printf("민수의 주소 %p, 암호 : %d\n", Agent, *Agent);

  printf("\n");

  //스파이(미션맨이 바꾼 암호에서 2를 빼라)
  int* Spy;
  Spy = &Chulsu; //철수의 주소 가져오기
  *Spy -= 2;
  printf("철수의 주소 %p, 암호 : %d\n", Spy, *Spy);
  Spy = &YoungHee; //철수의 주소 가져오기
  *Spy -= 2;
  printf("영희의 주소 %p, 암호 : %d\n", Spy, *Spy);
  Spy = &Minsu; //철수의 주소 가져오기
  *Spy -= 2;
  printf("민수의 주소 %p, 암호 : %d\n", Spy, *Spy);

  //다시 확인
  printf("\n");
  printf("철수의 주소 %p, 암호 : %d\n", &Chulsu, Chulsu);
  printf("영희의 주소 %p, 암호 : %d\n", &YoungHee, YoungHee);
  printf("민수의 주소 %p, 암호 : %d\n", &Minsu, Minsu);
  
  return 0;
}