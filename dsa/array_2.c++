#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,3,4,6,7,9};
    int size = 6;

    int start = 0;
    int end = size-1;
   
    while(start <= end){

        if(start == end){
            cout<< arr[start] <<" " ;
        }
        else{
            cout << arr[start] <<" ";
            cout << arr[end] <<" ";
        }
        start++;
        end--;

    }

}