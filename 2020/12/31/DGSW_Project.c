/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 31일(목), "프로젝트 - 물고기 키우기"
*/

#include <stdio.h>
#include <time.h>
#include <windows.h>

#pragma execution_character_set("utf-8")

/*
  조건 :
    - 6마리의 물고기가 각자의 어항에 살고 있다
    - 이들의 어항에 있는 물들은 빨리 증발한다
    - 물이 증발하기 전에 어항에 물을 주어라
*/

int Level;
int Fishbowls[6]; //6개의 어항
int* FishCursor;

//값 초기화
void Initialize(){
  Level = 1; //1레벨

  for(int i = 0; i < sizeof(Fishbowls) / sizeof(int);i++)
    Fishbowls[i] = 100; //물의 최대 수위는 100
}

void Dry(long elapsedTime){
  for(int i = 0; i < sizeof(Fishbowls) / sizeof(int);i++){
    Fishbowls[i] -= (Level * 2 * (int)elapsedTime);
    if(Fishbowls[i] < 0){Fishbowls[i] = 0;}
  }
}

int getDriedPos(){
  for(int i = 0; i < sizeof(Fishbowls) / sizeof(int);i++){
    if(Fishbowls[i] <= 0)
      return i;
  }
  return -1;
}

int AllDried(){
  int DriedOne = 1;
  for(int i = 0; i < sizeof(Fishbowls) / sizeof(int);i++){
    if(Fishbowls[i] > 0)
      DriedOne = 0; //true
  }
  return DriedOne;
}

//어항 출력
void PrintBowls(){
  printf("| 1번 어항 | 2번 어항 | 3번 어항 | 4번 어항 | 5번 어항 | 6번 어항 |\n");
  for(int i=0; i < sizeof(Fishbowls) / sizeof(int);i++){
    printf("|   %3d%%   ", *(FishCursor + i));
  }
  printf("|\n");
}

int main(void){
  Initialize();

  long startTime = 0; //게임 시작시간
  long totalElapsedTime = 0; //총 경과시간
  long prevElapsedTime = 0; //직전 경과 시간

  int FishbowlPos; //물을 줄 어항의 위치
  FishCursor = Fishbowls; //Fishbowls의 첫번째 아이템 주소

  startTime = clock(); //ms 단위로(Timestamp) 가져오기
  SetConsoleOutputCP(65001);

  //게임 시작
  while(1){
    PrintBowls();

    if(AllDried()){
      printf("Game over!\n");
      exit(0);
    }

    printf("몇번 어항에 물을 줄까요? >");
    scanf("%d", &FishbowlPos);
    if(FishbowlPos < 1 || FishbowlPos > 6){printf("잘못된 입력값입니다!\n");continue;}

    //총 경과시간
    totalElapsedTime = (clock() - startTime) / 1000;
    printf("총 %ld초가 지났습니다.\n", totalElapsedTime);

    //직전에 물을 준 시간
    prevElapsedTime = totalElapsedTime - prevElapsedTime;
    printf("최근 경과 시간 %ld초\n", prevElapsedTime);

    //직전에 물을 준 시간을 계산하여 증발
    Dry(prevElapsedTime); //증발 처리

    if(FishCursor[FishbowlPos - 1] <= 0){printf("이미 죽은 물고기는 물을 주지 못합니다.\n");continue;}
    
    if(FishCursor[FishbowlPos - 1] + 1 > 100){printf("물을 넘치게 주지는 못합니다.\n");continue;}

    FishCursor[FishbowlPos - 1] += 1; //해당 어항에 1%만큼의 물을 추가

    //레벨업 확인(20초마다)
    if(totalElapsedTime / 20 > Level -1){
      Level++;
      printf("Level up! | %dlv -> %dlv\n", Level - 1, Level);
    }
    
    //성공여부
    if(Level == 5){
      printf("축하합니다! 성공하였습니다.\n");
      exit(0);
    }

    prevElapsedTime = totalElapsedTime;
    printf("\n\n");
  }
}