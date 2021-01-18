/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    1월 18일(월), "프로젝트 강좌"
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 10000

int main(void){
  /*
    조건 :
      * 비밀번호를 입력받는다
      * 맞는 경우에는 일기를 불러와서 보여준다(+ 내용을 계속 작성할 수 있음)
      * 틀리면 경고 메시지를 표시하고 닫음
  */
  char loaded[MAX]; //파일에서 불러온 내용
  char content[MAX]; //일기장 내용
  char password[20]; //비밀번호

  char c; //비밀번호 입력 시 키값 확인용(input mask)

  printf("비밀일기\n");
  printf("비밀번호를 입력하세요 >");
  int PWidx = 0;
  while(1){
    c = getch();

    if(c == 8 && PWidx > 0){
      password[PWidx] = '\0';
      PWidx--;

      printf("\b");
      fputs(" ", stdout);
      printf("\b");
    }else if(c == 13){password[PWidx] = '\0';break;}else{
      password[PWidx] = c;
      PWidx++;
      printf("*");
    }
  }
  printf("\n");

  if(strcmp(password, "skehzheld") == 0){
    printf("비밀번호가 맞았습니다!");
    char* FileName = "Diary.txt";
    FILE* Diary = fopen(FileName, "a+b"); //파일 없으면 생성, 있으면 append를 함
    if(Diary == NULL){printf("파일 열기 실패");return 0;}
    while(fgets(loaded, MAX, Diary) != NULL){
      printf("%s", loaded);
    }

    printf("\n\n 내용을 계속 입력하세요(종료는 EXIT 입력)\n\n");

    while(1){
      scanf("%[^\n]", content); // 새 줄바꿈이 나오기 전까지 읽어들임
      getchar(); //enter 키 입력을 flush 처리

      if(strcmp(content, "EXIT") == 0){
        printf("일기를 저장하였습니다.\n");
        break;
      }
      fputs(content, Diary);
      fputs("\n", Diary);
    }
    fclose(Diary);

  }else{
    printf("비밀번호가 틀렸습니다!");
  }

  return 0;
}