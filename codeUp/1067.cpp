#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    if(a<0)
        cout<<"minus"<<endl;
    else   
        cout<<"plus"<<endl;
    if(a%2 ==0)
        cout<<"even"<<endl;
    else   
        cout<<"odd"<<endl;
}