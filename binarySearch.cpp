#include <iostream>
using namespace std;

bool binarySearch(int *arr,int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid = (e+s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        s=mid+1;
        return binarySearch(arr,s,e,k);
    }
    else if(arr[mid]>k){
        e=mid-1;
        return binarySearch(arr,s,e,k);
    }
}

int main(){
    int n ;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int* arr = new int[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element to find";
    cin>>k;

    bool ans = binarySearch(arr,0,n-1,k);
    if(ans){
        cout<<" The Element is found ";
    }
    else{
        cout<<"Element is not found ";
    }
}