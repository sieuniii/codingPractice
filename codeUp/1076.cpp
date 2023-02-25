#include <iostream>

using namespace std;

int main(){
    char data;
    cin>>data;
    for(int i=97; i<=int(data); i++){
        cout<<char(i)<<" ";
    }
}