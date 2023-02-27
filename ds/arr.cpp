#include <iostream>

using namespace std;

class Array{
    private: 
        int *arr;
        int arrSize;
    public:
        Array(int size){
            arrSize = size;
            arr = new int [arrSize];

            for(int i=0; i<size; i++){
                arr[i] = 0;
            }
        }

        int at(int idx){
            return arr[idx];
        }

        void add(int idx, int value){
            if(idx >arrSize -1){
                cout << -1 <<endl;
            }
            else{
                for(int i=arrSize -2; i>=idx; i--){
                    arr[i+1] = arr[i];
                }
                arr[idx] = value;
            }
        }

        void remove(int idx){
            for (int i= idx; arrSize -1 ; i++){
                arr[i] = arr[i+1];
            }
            arr[arrSize-1] =0;
        }
        void set (int idx, int value){
            arr[idx] = value;
        }
        void print(){
            for (int i=0; i<arrSize; i++){
                cout <<arr[i] << " ";
            }
            cout <<endl;
        }
};
