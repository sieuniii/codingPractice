
#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int N,sum=0;
    string data;

    cin>>N;
    cin>>data;

    for(int i=0; i<data.length(); i++)
         sum += data[i]-'0';
     
    cout<<sum;
    
   
}

