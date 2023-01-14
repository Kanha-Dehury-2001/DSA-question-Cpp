#include <iostream>
using namespace std;

bool linearSearch(int *arr,int n,int k){
    if(n<0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }
    else{
        return linearSearch(arr+1,n-1,k);
    }
}

int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;

    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the element tp find";
    cin>>k;

    if(linearSearch(arr,n,k)){
        cout<<"Element is found";
    }
    else{
        cout<<"Element not found";
    }

    return 0;
}