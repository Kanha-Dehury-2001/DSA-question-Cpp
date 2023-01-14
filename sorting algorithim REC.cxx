#include <iostream>
using namespace std;

void bubbleSort(int* arr,int n){
    if(n==0){
        return;
    }
    for(int i =0;i<(n-1);i++){
        swap(arr[i],arr[i+1]);
    }
    bubbleSort(arr,n-1);
}

void selectionSort(int* arr,int n){
    if(n==0){
        return;
    }
    int minindex = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }
    swap(arr[0],arr[minindex]);
    selectionSort(arr+1,n-1);
}

void insertionSort(int * arr,int n){

    if(n==0){
            return;
    }
            
   // int temp = arr[1];
    for(int j = 0;j<=0;j--){
        if(arr[0]>arr[1]){
            swap(arr[0],arr[1]);
        }
        else{
            break;
        }
    }
    insertionSort(arr+1,n-1);
}

int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    
    int * arr = new int[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    //bubbleSort(arr,n);
    selectionSort(arr,n);
    //insertionSort(arr,n);
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}