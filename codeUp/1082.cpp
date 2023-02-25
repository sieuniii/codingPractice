#include <iostream>

using namespace std;

int main(){
    int n,result;
    cin>>hex>>n;
    
    for(int i=1; i<16; i++){
        result = n * i;
        cout<<uppercase<<hex<<n<<"*"<<i<<"="<<result<<endl;
    }
}

/*
uppsercase : 대문자 출력 
*/