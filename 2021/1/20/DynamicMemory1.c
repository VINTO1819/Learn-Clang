/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 20일(수), "동적 메모리 - 구조체 메모리 할당"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bookstruct{
  int number;
  char title[100];
} book;

void showBooks(book* BookArr, int Size){
  for(int i=0; i<Size;i++){
    printf("%d번째 도서 | 제목 : %s\n", (BookArr + i)->number, (BookArr + i)->title);
  }
}

int main(void){
  const int SIZE = 2;
  book* bookPtr;
  bookPtr = (book*)malloc(sizeof(book) * SIZE); //2개의 공간 할당
  if(bookPtr == NULL){printf("동적메모리 할당에 실패했습니다.\n");return 0;}

  strcpy(bookPtr->title, "C Programming");
  bookPtr->number = 1;

  strcpy((bookPtr + 1)->title, "Deta Structure");
  (bookPtr + 1)->number = 2;

  showBooks(bookPtr, SIZE);

  return 0;
}
