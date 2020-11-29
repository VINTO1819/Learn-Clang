/*
    CodeUp 기초 100제 with C++
    1018번 문제, "시간 입력받아 그대로 출력하기"
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int h, min = 0;
    scanf("%d:%d", &h, &min);
    cout << h << ":" << min;
}