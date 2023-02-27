
#include <iostream>
#include <string>
using namespace std;

int main()
{   
    
    string str;
    int data[26];

    cin>>str;

    //배열 초기화
    for(int i=0; i<26; i++){
        data[i]=-1;
    }

    for (int i=0; i<str.length(); i++){

        if(data[str[i]-'0'-49] == -1)
            data[str[i]-'0'-49]=i;        
            
    }

    for(int i=0; i<26; i++){
        cout<<data[i]<<" ";
    }



    
   
}

