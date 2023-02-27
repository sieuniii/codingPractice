#include <iostream>

using namespace std;

int main()
{
    int data[30] = {};
    int a;
    for(int i=0; i<28; i++){
        cin>>a;
        data[a-1]=1;
    }
    for(int i=0; i<30; i++){
        if(data[i]==0)
            cout<<i+1<<"\n";
    }
}