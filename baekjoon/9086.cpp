
#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int N;
    cin>>N;

    string data[N];

    for(int i=0; i<N; i++)
        cin>>data[i];
    
    for(int i=0; i<N; i++){
        cout<<data[i][0];
        cout<<data[i][data[i].length()-1]<<endl;
    }
}

