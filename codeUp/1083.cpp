#include <iostream>

using namespace std;

int main(){
    int n,result;
    cin>>n;
    
    for(int i=1; i<=n; i++){
       if(i%3 == 0)
            cout<<"X ";
        else   
            cout<<i <<" ";
    
    }
}
