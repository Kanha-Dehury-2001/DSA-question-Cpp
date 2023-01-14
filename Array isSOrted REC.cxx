#include <iostream>
using namespace std;

bool isSorted(int* arr,int n){
    if(n==0 || n== 1){
        return true;
    }
    
    if(*arr>*(arr+1)){
        return false;
    }
    else return isSorted((arr+1),n-1);
}

int main(){
    
    //int arr[6]={1,6,9,111,14,18};
    //int arr[1]={1};
    //int arr[0]={};
    int arr[5]={1,6,9,111,14};
    cout<<isSorted(arr,5);
    if(isSorted(arr,5)){
        cout<<"ARRAY is sorted ";
    }
    else cout<<"ARRAY is not sorted ";
       
    return 0;
}