 #include <bits/stdc++.h>
using namespace std;

void inputArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}

void displayArray(int* arr,int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int peakIndexInMount(int arr[],int n){
    int s= 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<e){
        if(arr[mid]>arr[mid+1]){
            e=mid;
        }
        else{
            s = mid+1;
        }
        mid = s +(e-s)/2;
    }
    return mid;
}

int main(){
 int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<endl;
    
    cout<<"Enter the element of array : ";
    int* arr = new int[n];
    inputArray(arr,n);

    cout<<"display the array : ";
    displayArray(arr,n);
    int k;

    cout<<"Peak index of mountain array : ";
    cout<<peakIndexInMount(arr,n)<<endl;
}