#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int firstNum, lastNum;
    scanf("%d-%d",&firstNum,&lastNum);
    printf("%06d%07d",firstNum,lastNum);
}