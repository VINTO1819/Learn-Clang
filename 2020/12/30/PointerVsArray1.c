/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 30일(수), "포인터와 배열의 관계 1"
*/

#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("utf-8")

int main(void){
  SetConsoleOutputCP(65001);
  
  int arr[3] = { 1, 9, 2 };
  int* ptr = arr; //배열의 첫번째 Item의 주소를 가져옴(배열명 자체는 첫번째 아이템을 가리킴)

  //배열의 경우
  for(int i=0;i<sizeof(arr) / sizeof(int);i++){
    printf("포인터 arr[%d]의 값은 %d\n", i, arr[i]);
  }
  printf("\n");

  //포인터의 경우 1
  for(int i=0;i<sizeof(arr) / sizeof(int);i++){
    printf("포인터 ptr[%d]의은 %d\n", i, ptr[i]);
  }
  printf("\n");

  //포인터의 경우 2
  for(int i=0;i<sizeof(arr) / sizeof(int);i++){
    printf("포인터 ptr + %d이 가리키는 값은 %d\n", i, *(ptr + i));
  }
  printf("\n");

  //어떠한 방법으로 값을 변경해도 동일함
  arr[0] = 100; //arr의 첫번째 아이템에 100을 대입
  ptr[1] = 200; //ptr이 가리키는 배열의 2번째 아이템에 200을 대입
  *(ptr + 2) = 300; //ptr이 가리키는 주소(배열의 첫번째 아이템 위치)에서 2개를 더한 것(즉, 3번쨰 아이템의 위치)에 300을 대입
  //위 방법은 *(arr + 2) = 300으로도 동일

  /*
      *(arr + 1)
    equals
      arr[1]
    equals
      ptr[1]
    equals
      *(ptr + 1)

    즉 arr은 arr[0]의 주소를 나타내는 포인터 변수임
    그렇기에 우리는 [Index]가 아닌, "arr이 가르키는 첫번째 아이템 주소 + Index"로도 접근이 가능함.
  */

  //값 확인
  for(int i=0;i<sizeof(arr) / sizeof(int);i++){
    printf("arr[%d]의 값은 %d\n", i, arr[i]);
  }

  printf("\n");

  //arr과 arr[0]의 주소값 확인
  //arr은 포인터 변수지만, arr[Index]는 정수형 변수이므로 &를 통해 주소를 가져와야 함
  printf("arr + 0의 값 : %d\n", arr + 0);
  printf("arr[0]의 주소값 : %d\n", &arr[0]);

  printf("arr + 1의 값 : %d\n", arr + 1);
  printf("arr[1]의 주소값 : %d\n", &arr[1]);

  printf("arr + 2의 값 : %d\n", arr + 2);
  printf("arr[2]의 주소값 : %d\n", &arr[2]);

  //여기서 arr + 1을 하거나 arr[1]을 하였는데 주소값이 4씩 늘어난 이유는,
  //우리가 선언한 배열의 자료형이 4byte의 크기를 가진 int형이기 때문이다. (즉 아이템 당 4byte의 공간을 먹기에)

  return 0;
}