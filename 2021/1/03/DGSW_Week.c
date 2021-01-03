/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 03일(일), "주간 과제 - 배열과 포인터"
*/

#include <stdio.h>

int main(void){
  int CallSize;
  scanf("%d", &CallSize);

  int CallArr[CallSize];
  for(int i = 0; i < CallSize;i++)
    scanf("%d", (CallArr + i));

  int Result[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  for(int i = 0;i < CallSize;i++){
    Result[*(CallArr + i) - 1]++;
  }

  for(int i = 0;i < sizeof(Result)/sizeof(int);i++)
    printf("%d ", Result[i]);

  return 0;
}