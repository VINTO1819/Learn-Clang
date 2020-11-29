/*
    CodeUp 기초 100제 with C++
    1020번 문제, "주민번호 입력받아 형태 바꿔 출력하기"
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int fisrt, second;
    scanf("%d-%d", &fisrt, &second);
    printf("%06d%07d", fisrt, second);
}