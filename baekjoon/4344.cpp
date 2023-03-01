#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int C, N, count;
    double avg, sum, percentage;
    int score[1000] , pctArr[C];

    cin>>C;

    for(int i=0;i<C; i++){
        avg = 0;
        sum = 0;
        count =0;
        cin>>N;

        for(int j=0; j<N; j++){
            cin>>score[j];
            sum = sum + score[j];
        }

        avg = sum/double(N);

        for(int j=0; j<N; j++){
            if(score[j]>avg) {
                count++;
            }

        }
        percentage = double(count)/double(N)*100;

        cout<<fixed<<setprecision(3)<<percentage<<"%"<<endl;

    }

}