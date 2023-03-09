#include <iostream>

using namespace std;

int main(){
    int a1,a0;
    int c;
    int n0,n;
    cin>>a0>>a1;
    cin>>c;
    cin>>n0;
    n = n0;

    if(a0*(c-a1) <= n0)
        cout<<1;
    else   
        cout<<0;

}