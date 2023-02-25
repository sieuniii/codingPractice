#include <iostream>

using namespace std;

int main(){
    int data, sum=0;
    cin>>data;
    for(int i=0; i<=data; i++){
        if(i%2 ==0){
            sum += i;        }
    }
    cout<<sum;
}