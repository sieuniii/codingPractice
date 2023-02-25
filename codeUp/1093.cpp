#include <iostream>

using namespace std;

int main(){
    int n,a;
    cin>>n;

    int data[23] = {};
    for(int i=0; i<n; i++){
        cin>>a;
        data[a-1]++;
    }

    for(int i=0; i<23; i++){
        cout<<data[i]<<" ";
    }

}

/*

array 크기 : sizeof (arrayname) / sizeof (*arrayname)
*/