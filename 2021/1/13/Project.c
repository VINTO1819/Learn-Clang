/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 13일(수), "프로젝트"
*/

#include <stdio.h>
#include <time.h>
#include <cstdlib>

typedef struct catStruct{
  char* name;
  int age;
  char* personality;
  int level;
} Cat;

//모든 고양이 리스트
Cat Cats[5] = {
  {"노랑이", 2, "온순함", 2},
  {"깜냥이", 6, "사나움", 5},
  {"치즈", 1, "온순함", 1},
  {"하늘이", 2, "날카로움", 3},
  {"다움이", 2, "산만함", 4}
};

int isFilled(int arr[], int len){
  for(int i = 0; i < len;i++){
    if(arr[i] == -1){return 0;}
  }
  return 1;
}

int find(int arr[], int len, int target){
  for(int i = 0; i < len;i++){
    if(arr[i] == target){return 1;}
  }
  return 0;
}

int getCatsAmount(int arr[], int len){
  for(int i = 0; i < len;i++){
    if(arr[i] == -1){return i;}
  }
  return 0;
}

int main(void){
  /*
    조건 :
      * 5마리의 고양이가 있음
      * 아무 키나 눌러서 랜덤으로 고양이를 뽑음
      * 모든 고양이를 뽑게 되면 끝
      * 중복발생 가능
  */

  srand(time(NULL));
  
  int Collections[5] = {-1, -1, -1, -1, -1};
  while(!isFilled(Collections, 5)){
    int Index = rand() % 5;
    Cat NewCat = Cats[Index];
    printf("새로운 고양이!\n * 이름 : %s\n * 나이 : %d\n * 셩격 : %s\n * 난이도 : %d\n", 
      NewCat.name, NewCat.age, NewCat.personality, NewCat.level);
    if(!find(Collections, 5, Index)){
      //새로운 고양이면 배열에 추가
      Collections[getCatsAmount(Collections, 5)] = Index;
    }

    printf("계속하려면 아무 키나 누르세요..");
    getchar(); //아무 문자나 입력받음
    printf("\n\n");
  }

  printf("모든 고양이를 다 뽑았습니다 :\n");
  for(int i=0;i<5;i++){
    Cat CatItem = Cats[Collections[i]];
    printf("%d번째로 뽑은 고양이\n * 이름 : %s\n * 나이 : %d\n * 셩격 : %s\n * 난이도 : %d\n\n", 
      i + 1, CatItem.name, CatItem.age, CatItem.personality, CatItem.level);
  }

  return 0;
}