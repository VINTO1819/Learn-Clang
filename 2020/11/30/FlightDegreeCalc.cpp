/*
    개인 공부 with C++

    항공기의 절대고도와 본인의 절대고도, 항공기와 본인의 거리를 입력받아
    본인 위치에서 항공기를 볼 때 필요한 각도를 계산해주는 프로그램
*/

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

#pragma execution_character_set("utf-8")

int main(){
    float DistanceToAircraft, Altitude_Me, Altitude_Aircraft;

    SetConsoleOutputCP(65001);

    cout << "항공기의 해발고도를 입력하세요(ft) >";
    cin >> Altitude_Aircraft;

    cout << "본인의 해발고도를 입력하세요(m) >";
    cin >> Altitude_Me;

    cout << "본인과 항공기의 거리를 입력하세요(km) >";
    cin >> DistanceToAircraft;

    float RelativeAltitude = ((Altitude_Aircraft/3.281) - Altitude_Me) / 1000; //km 고도로 변환
    float TanTemp = RelativeAltitude / DistanceToAircraft; //역탄젠트에 필요한 값 계산

    float Result = atan(TanTemp) * 180/3.1415926;
    cout << "당신의 위치에서 항공기는 " << Result << "° 위에 있습니다";
}