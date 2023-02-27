

#include <iostream>
using namespace std;

int main()
{
 
    ios_base::sync_with_stdio(false);
	cout.tie(0);

    int N,M;
    cin >>N;

    double score[N],sum=0;


    for(int i=0; i<N; i++){
        cin>>score[i];
        if(i==0) M= score[i];
        else {
            if(score[i]>M) 
                M = score[i];
        }
    }

    for(int i=0; i<N; i++){
        score[i] = score[i]/M *100;
        sum += score[i];
    }


    cout<<double(sum)/double(N);

}

