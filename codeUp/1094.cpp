#include <iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n;
    int data[n];
    for (int i=0; i<n; i++){
        cin>>data[i];
    }
    for(int i=n-1; i>=0; i--){
        cout<<data[i]<<" ";
    }
}