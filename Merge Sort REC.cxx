#include <iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;
    
    int len1= mid-s+1;
    int len2= e-mid;
    
    int * first = new int[len1];
    int * second = new int[len2];
    
    int mi=s;
    
    for(int i=0;i<len1;i++){
        first[i]=arr[mi++];
    }
    
    for(int i =0;i<len2;i++){
        second[i]=arr[mi++];
    }
    
    mi=s;
    int firsti=0;
    int secondi=0;
    while(firsti<len1 && secondi<len2){
        if(first[firsti]<second[secondi]){
            arr[mi++]=first[firsti++];
        }
        else {
            arr[mi++]=second[secondi++];
        }
    }
    
    while(firsti<len1){
        arr[mi++]=first[firsti++];
    }
    
    while(secondi<len2){
        arr[mi++]=second[secondi++];
    }
    
    delete []first;
    delete []second;
}
    

void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    
    int mid = s+(e-s)/2;
    
    mergeSort(arr,s,mid);
    
    mergeSort(arr,mid+1,e);
    
    merge(arr,s,e);
}

int main(){
    
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    
    int * arr=new int[n];
    
    cout<<"Enter the element of array";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    mergeSort(arr,0,n-1);
    
    cout<<"Hence the sorted array is : "<<endl;
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}