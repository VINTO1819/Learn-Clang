/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 10일(일), "주간 과제 - 구조체 1"
*/

#include <stdio.h>

struct point{
    int x; int y;
};

int main(void){
    /*
        조건 :
          * 한 점의 x, y좌표를 입력받는다.
          * 그 점이 좌표평면상 몇 사분면에 위치하는지 출력하라
    */

    struct point p;
    scanf("%d %d", &p.x, &p.y);

    //간단하게 확인할 수 있도록 2차원 배열 이용(사분면을 그대로 구현)
    int coordinate[2][2] = {
        {2, 1},
        {3, 4}
    };

    if(p.x == 0 || p.y == 0){
        printf("어느 사분면에도 속하지 않음");
        return 0;
    }

    int y = (p.y > 0) ? 0 : 1; //점의 y좌표가 0보다 크다면 2 또는 1이고, 작다면 3 또는 4사분면이다.
    int x = (p.x > 0) ? 1 : 0; //점의 x좌표가 0보다 크다면 4 또는 1이고, 작다면 3 또는 2사분면이다.

    printf("(%d, %d) is in %dth", p.x, p.y, coordinate[y][x]);
    return 0;
}