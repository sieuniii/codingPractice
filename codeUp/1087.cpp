#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int data,sum=0, i=1;
    cin>>data;
    while(1){
        sum +=i;
        if(sum >= data)
            break;
        else    
            i++;
    }
    cout<<sum;
}
