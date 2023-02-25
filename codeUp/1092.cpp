#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long x,y,z, a = 1;
    cin>>x>>y>>z;
    while(1){
        a++;
        if(a % x ==0 && a%y == 0 && a%z ==0)
            break;
        
    }
    cout<<a;

}