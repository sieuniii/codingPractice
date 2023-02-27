#include <iostream>

using namespace std;

int main()
{
	int N, M;
    int a,b;
    int temp;

    cin>>N>>M;

    int data[N];

    for(int i=0; i<N; i++){
        data[i]=i+1;
    }

    for(int i=0; i<M; i++){
        cin>>a>>b;
        temp = data[a-1];
        data[a-1] = data[b-1];
        data[b-1] = temp;
    }

    for(int i=0; i<N; i++){
        cout<<data[i]<<" ";
    }
}