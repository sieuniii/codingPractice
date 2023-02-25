#include <iostream>

using namespace std;

int main(){
    int data,i=1,sum =0;
    cin>>data;
    while(1){
        sum = sum + i;
        if(sum >= data)
            break;
        else{
            i++;
        }
       
    }
    cout<<i;
}