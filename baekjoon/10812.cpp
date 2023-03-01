#include <iostream>

using namespace std;

void print(int* arr, int N){
    for(int i=1; i<=N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int N, M;
    int begin , end, mid, count=0, temp_count=0;

    cin>>N>>M;

    int num[N+1];
    int temp[N];
    
    //init array
    for(int i=1; i<=N;i++){
        num[i]=i;
    }

    //rotate algorithm
    for(int i=0; i<M; i++){
        cin>>begin>>end>>mid;
    
        //store at temp begin to mid
        for(int j=begin; j<=mid-1 ; j++){
            temp[j]= num[j];
        }

        //swap 
        for(int j=mid; j<=end; j++){
            num[begin + count] = num[j];
            count++;
        }
    
     
        for(int j=begin+count; j<= end; j++){
            num[j]= temp[begin+temp_count];
            temp_count++;
        }
        count=0;
        temp_count=0;
        
    }
    print(num, N);
}