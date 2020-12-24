/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 24일(목), "프로젝트 - 동물 뒤집기"
*/

#include <stdio.h>
#include <time.h>
#include <cstdlib>

//전역변수 선언
int Left = 10; //총 10마리 남음
int Fail = 0; //실패 횟수
int Try = 0;
int Animals[20]; //각자 두 쌍씩 동물들을 넣어둠
char* AnimalBind[10] = { "Cat", "Puppy", "Bird", "Cow", "Pig", "Tiger", "Elephant", "Rabbit", "Deer", "Duck"};

//문제 프린트
void Question(){
    int Index = 1;
    for(int i1=0; i1 < 4; i1++){ //행
        for(int i2=0; i2 < 5; i2++){ //줄
            if(Animals[Index - 1] < 0){ //이미 찾은 값이라면
                printf("%8s ", AnimalBind[-(Animals[Index - 1])]); //다시 양수로 가져와서 꺼냄
            }else{
                printf("%8d ", Index);
            }
            Index++;
        }
        printf("\n"); //개행
    }
}

void SetNumberAtEmpty(int value){
    while(1){
        int random = rand() % (sizeof(Animals) / sizeof(int)); //랜덤한 배열 위치 가져오기
        if(Animals[random] == NULL){ //빈 곳이라면 배열 반환
            Animals[random] = value;
            return;
        }
    }
}

void InitRandomArr(){
    for(int i=0;i < 10;i++){ //동물 개수만큼
        printf("%dth animal\n", i);
        for(int i2=0; i2 < 2; i2++){ //동물마다 2개 할당
            SetNumberAtEmpty(i); //동물 대입
        }

    }
}

//한 턴
void Turn(){
    printf("Select Cards :");
    int a, b;
    scanf("%d %d", &a, &b);

    if(Animals[a - 1] < 0 || Animals[b - 1] < 0){ //이미 풀었다면
        printf("%dth item and %dth item is already selected..\n", a, b); //이미 사용했다는 거 알리기
    }else if(a == b){ //같은 값을 입력했다면
        printf("You can't input same values(%d and %d)", a, b);
    }else{ //풀 수 있다면
        if(Animals[a - 1] == Animals[b - 1]){
            //사용 처리
            printf("Correct! (%s and %s)\n", AnimalBind[Animals[a - 1]], AnimalBind[Animals[b - 1]]);
            Animals[a - 1] = -(Animals[a - 1]);
            Animals[b - 1] = -(Animals[b - 1]);
            Left -= 2;
        }else{
            Fail++;
            printf("Wrong.. (%s and %s)\n", AnimalBind[Animals[a - 1]], AnimalBind[Animals[b - 1]]);
        }
        Try++;
    }
    printf("\n");
}

void printfArr(){
    printf("{ ");
    for(int i=0;i< sizeof(Animals)/sizeof(int); i++){
        printf("%s, ", AnimalBind[Animals[i]]);
    }
    printf("}\n");
}

int main(void){
    /*
        조건 :
          * 10마리의 서로 다른 동물들이 있음(2마리는 같은 동물 쌍임)
          * 사용자로붙터 2개의 입력값을 받아서, 그 위치에 있는 동물이 서로 같으면 뒤집기(정답처리)
          * 모든 동물 쌍을 찾으면 게임 종료
          * 총 실패한 횟수 알려주기
    */

    //난수 시드지정
    srand(time(NULL));

    InitRandomArr();
    printfArr(); //랜덤하게 되었는지 보여주는 디버그용 출력함수
    printf("=========== for Hint and debug ===========\n\n");

    //0이 될 때까지(= 남은 카드가 없어질 때까지 무한 반복)
    while(Left != 0){
        Question();
        Turn();
        printf("%d cards left\n", Left);
    }
    
    //출력
    printf("Wow! You solved these in %d tries with %d fails.", Try, Fail);
    return 0;   
}