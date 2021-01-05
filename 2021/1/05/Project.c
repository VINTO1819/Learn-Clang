/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 5일(화), "프로젝트"
*/

#include <stdio.h>
#include <time.h>
#include <cstdlib>

int main(void){
  srand(time(NULL));
  int answer; //답
  int treatment = rand() % 4; //총 4개
  int cntShowBottle = 0; //이번 게임에 보여줄 병 개수
  int prevCntShowBottle = 0; //이전 게임에 보여줬던 병 개수

  for(int i = 1; i <= 3; i++){
    int Bottle[4] = { 0, 0, 0, 0 };
    do{
      cntShowBottle = rand() % 2 + 2; //보여줄 병 개수
    }while(cntShowBottle == prevCntShowBottle);

    int isIncluded = 0; //병에 발모제가 포함되었는지 여부
    printf("%d번째 시도 : ", i);
    
    //병 종류 선택
    for(int j=0;j<cntShowBottle; j++){
      int randBottle = rand() % 4;
      //뽑은 병은 1로 변경
      if(Bottle[randBottle] == 0){
        Bottle[randBottle] = 1;
        if(randBottle == treatment){ //발모제가 포함되었으면
          isIncluded = 1;
        }
      }else{ //이미 선택되었으면
        j--;
      }
    }

    //사용자에게 문제 표시
    for(int k=0;k<4;k++){
      if(Bottle[k] == 1)
        printf("%d ", k + 1);
    }
    printf(" 물약을 머리에 바릅니다\n\n");
    if(isIncluded){
      printf("  >> 성공\n");
    }else{
      printf("  >> 실패\n");
    }

    printf("\n 계속하려면 아무 키나 누르세요");
    getchar();
  }

  printf("\n\n발모제는 몇번일까요? >");
  scanf("%d", &answer);

  if(answer == treatment + 1){
    printf("\n정답입니다\n");
  }else{
    printf("\n오답입니다, 정답은 %d입니다.\n", treatment + 1);
  }

  return 0;
}