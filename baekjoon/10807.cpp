#include <iostream>

using namespace std;

int main()
{
	int N, v,count=0;
    cin>>N;
    int data[N];

    for(int i=0; i<N; i++){
        cin >> data[i];
    }

    cin >>v;

    for(int i=0; i<N; i++){
        if(data[i] == v)
            count ++;
    }

    cout <<count;
	
}