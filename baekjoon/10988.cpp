#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;
    int len_idx=0, check = 1;

    cin>>str;

    while(check && len_idx <str.length()/2){
        if(str[len_idx]!= str[str.length()-len_idx-1]) 
            check=0;
        
        len_idx++;
    }
    cout<<check;

}