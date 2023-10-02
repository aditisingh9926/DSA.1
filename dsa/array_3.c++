#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,5,6,9,7};
    int size = 7;

    int maxi = INT_MIN ;
    int mini = INT_MAX;

    for(int i=0; i<size; i++){
       if(arr[i] > maxi){
         maxi= arr[i];
       }
    }
    cout<< "Maximum number is : " << maxi <<endl;
}