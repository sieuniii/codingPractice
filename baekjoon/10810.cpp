#include <iostream>

using namespace std;

int main()
{
	int N, M;
    int a,b,c;

    cin >> N >> M;
    
    int data[N];

     for(int i=0; i<N; i++){
        data[i]=0;
    }

    for (int i=0 ; i <M; i++){
        cin >>a>>b>>c;
        for (int j=a; j<=b; j++){
            data[j-1] = c;
        } 
    }
	
    for(int i=0; i<N; i++){
        cout<<data[i]<<" ";
    }
}