/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 17일(일), "주간 과제 - File I/O"
*/

#include <stdio.h>

int main(void){
  /*
    조건 :
      * 주소를 입력받아 모니터에 출력하고 address.txt에 저장하라
  */

  FILE* addrFile = fopen("address.txt", "w");
  if(addrFile == NULL){printf("Error");return 0;}
  char addr[1024];
  fgets(addr, sizeof(addr) / sizeof(char), stdin);
  printf("학교의 주소 : %s", addr);
  fputs(addr, addrFile);
  fclose(addrFile);

  return 0;
}