/**/

#include <iostream>

using namespace std;

void reverse(int * arr , int start, int end);
void print(int *arr, int N);

int main()
{
    int N, M;
    int start,end;

    cin >>N>>M;

    int data[N+1];

    for (int i=0; i<N+1; i++){
        data[i]= i;
    }
   
   for(int i=0; i<M; i++){
        cin>>start>>end;
        reverse(data,start,end);
   }

   print(data,N);


}

void reverse(int * arr, int start, int end){
    int temp;
        for(int j=0; j<=(end-start)/2; j++){
            temp = arr[start+j];
            arr[start+j]= arr[end-j];
            arr[end-j]= temp;
        }
}

void print(int *arr, int N){
    for (int i=1; i<=N; i++){
        cout<<arr[i]<<" ";
    }
}

