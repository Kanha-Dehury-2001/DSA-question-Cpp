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

void moveZero(int arr[],int n){
    int i = 0;
    int j = 0;

    while(i<n && j<n){
        if(arr[i]!=0){
            i++;
        }
        else if(arr[j]==0){
            j++;
        }
        else{
            swap(arr[i],arr[j]);
        }
    
    }
}

int main(){
    int n;
    cout<<"Enter the size of array 1: ";
    cin>>n;
    cout<<"Enter the element of array 1: ";
    int* arr1 = new int[n];
    inputArray(arr1,n);
    cout<<"display the array 1: ";
    displayArray(arr1,n);

    cout<<endl;

    moveZero(arr1,n);

    displayArray(arr1,n);

}