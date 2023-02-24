#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float x;
    cin>>x;
    cout << fixed << setprecision(6) << x << endl;
}

/*
fixed : 소수점 아래 몇글자 할지 고정함
setprecision : 몇자리로 출력할지 정함
*/