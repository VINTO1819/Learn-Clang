#include <iostream>

using namespace std;

void Hello(){
    cout << "Hello!" << endl;
}

void Love(){
    cout << "I love you!" << endl;
}

int main(void){
    void (*Lambda)();
    Lambda = Hello;
    Lambda();
    Lambda = Love;
    Lambda();
    return 0;
}