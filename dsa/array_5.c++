
#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
}
bool find(int arr[], int size, int key){
    for(int i=0; i<size; i++){

        if(arr[i]==key){
          return true;
        }
    } 
    return false;  
}


int main(){
    int arr[]={1,2,3,4,5,6,6,7,8,9};
    int size = 10;

    int key= 7;
    cout<<"key is found "<<key<<endl;
}

 